/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:00:25 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/15 11:18:57 by ncontin          ###   ########.fr       */
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

static int	find_word_len(char const *s, char c, int s_index)
{
	int	word_len;

	word_len = 0;
	while (s[s_index] == c)
		s_index++;
	while (s[s_index + word_len] != c && s[s_index + word_len])
		word_len++;
	return (word_len);
}

static int	fill_words(char const *s, char c, int s_index, char *array)
{
	int	len;

	len = 0;
	while (s[s_index] != c && s[s_index])
	{
		array[len] = s[s_index];
		len++;
		s_index++;
	}
	array[len] = '\0';
	return (s_index);
}

static void	init_var(int *i, int *s_index)
{
	*i = 0;
	*s_index = 0;
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	int		s_index;
	char	**array;

	init_var(&i, &s_index);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (s[0] == '\0')
		array[0] = NULL;
	if (!array)
		return (NULL);
	while (i < words)
	{
		while (s[s_index] == c)
			s_index++;
		array[i] = malloc(find_word_len(s, c, s_index) + 1);
		if (!(array[i]))
			return (NULL);
		s_index = fill_words(s, c, s_index, array[i]);
		i++;
	}
	array[i] = NULL;
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
