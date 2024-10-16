/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:46 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/16 09:23:23 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = 0;
	dst_len = 0;
	if (dst != 0)
		dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	size_t	size;
// 	char	src[5] = "Hello";
// 	char	dst[7] = "Bonjour";
// 	char	b[0xF] = "nyan !";

// 	printf("%zu\n", ft_strlcat(((void *)0), b, 2));
// 	size = 20;
// 	// printf("%zu\n", strlcat(dst, src, size));
// 	// printf("strlcat: %s\n", dst);
// 	// printf("%zu\n", strlcat(NULL, "", 0));
// 	// printf("strlcat: %s\n", dst);
// 	// printf("%zu\n", ft_strlcat(dst, src, size));
// 	// printf("ft_strlcat: %s\n", dst);
// 	printf("%zu\n", ft_strlcat(NULL, "", 0));
// 	printf("ft_strlcat: %s\n", dst);
// }
