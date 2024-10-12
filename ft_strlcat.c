/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noscrub <noscrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:26:46 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/12 12:14:49 by noscrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (src_len);
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

// int	main(void)
// {
// 	size_t	size;
// 	char	src1[5] = "Hello";
// 	char	dst1[7] = "Bonjour";
// 	char	src[5] = "Hello";
// 	char	dst[7] = "Bonjour";

// 	size = 20;
// 	printf("%zu\n", strlcat(dst, src, size));
// 	printf("strlcat: %s\n", dst);
// 	printf("%zu\n", ft_strlcat(dst1, src1, size));
// 	printf("ft_strlcat: %s\n", dst1);
// }
