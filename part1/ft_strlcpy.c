/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:29:02 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/09 17:23:07 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "hello";
	char	dst[] = "bonjour";
	char	src1[] = "hello";
	char	dst1[] = "bonjour";

	//	printf("return: %d\n", strlcpy(dst, src, 3));
	printf("return: %zu\n", ft_strlcpy(dst1, src1, 3));
	//	printf("strlcpy res: %s\n", dst);
	printf("ft_strlcpy: %s\n", dst1);
}
