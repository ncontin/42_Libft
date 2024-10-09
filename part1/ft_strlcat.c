/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:46 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/09 19:37:28 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dst_len > size)
	{
		return (dst_len);
	}
	else if (size > dst_len)
	{
		while (i < size - dst_len - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

int	main(void)
{
	char	src1[] = "Hello";
	char	dst1[20] = "Bonjour";
	char	src[] = "Hello";
	char	dst[20] = "Bonjour";

	printf("%zu\n", strlcat(dst, src, 10));
	printf("strlcat: %s\n", dst);
	printf("%zu\n", ft_strlcat(dst1, src1, 10));
	printf("ft_strlcat: %s\n", dst1);
}
