/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:00:25 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/14 17:53:57 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	is_word;
	int	counter;

	i = 0;
	is_word = 1;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (is_word == 1)
			{
				counter++;
				is_word = 0;
			}
		}
		else
			is_word = 1;
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	int		j;
	int		len;
	int		word_len;
	char	**array;

	len = 0;
	i = 0;
	j = 0;
	words = count_words(s, c);
	// array = malloc(sizeof(char **) * (words + 1));
	array = (char **)malloc(sizeof(char *) * words);
	if (!array)
		return (NULL);
	while (i < words)
	{
		word_len = 0;
		while (s[j] == c)
			j++;
		while (s[j + word_len] != c)
			word_len++;
		array[i] = malloc(word_len + 1);
		if (!(array[i]))
			return (NULL);
		len = 0;
		while (s[j] != c)
		{
			array[i][len] = s[j];
			len++;
			j++;
		}
		array[i][len] = '\0';
		i++;
	}
	return (array);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int		i;
// 	char	str[] = "Hello, Bonjour, Ciao, Ola";
// 	int		words;
// 	char	**array;

// 	i = 0;
// 	words = count_words(str, ' ');
// 	printf("%d\n", words);
// 	array = ft_split(str, ',');
// 	while (i < words)
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// }
