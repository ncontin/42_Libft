/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:20:06 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 10:57:03 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	unsigned int	slen;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		substr = (char *)malloc(slen - start + 1);
	else
		substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len && start < slen)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_substr("hello baby", 0, 3));
// 	printf("%s\n", ft_substr("hello baby", 3, 3));
// 	printf("%s\n", ft_substr("hello baby", 6, 3));
// 	printf("%s\n", ft_substr("hello baby", 9, 3));
// }
