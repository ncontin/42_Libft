/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noscrub <noscrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:29:00 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/13 21:54:56 by noscrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst_ptr;
	char	*src_ptr;
	size_t	i;

	dst_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str1[] = "Geeks";
//     char str2[] = "Quiz";
//     puts("str1 before memcpy ");
//     puts(str1);
//     // Copies contents of str2 to str1
//     ft_memcpy(str1, str2, sizeof(str2));
//     puts("\nstr1 after memcpy ");
//     puts(str1);
// }
