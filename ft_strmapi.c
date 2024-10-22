/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:26:34 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 10:57:07 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	unsigned int	len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	ft_tolow(unsigned int i, char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		c += 32;
// 	return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "LoReM iPsUm";
// 	int		i;
// 	char	*result;

// 	result = ft_strmapi(str, ft_tolow);
// 	printf("%s\n", result);
// 	free(result);
// }
