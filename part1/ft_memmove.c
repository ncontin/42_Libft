/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:23:08 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/09 11:26:53 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst_ptr;
	char	*src_ptr;
	size_t	i;

	dst_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	if (dst_ptr > src_ptr)
	{
		while (n > 0)
		{
			dst_ptr[n] = src_ptr[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str1[] = "Geeks";
//     char str2[] = "Quiz";
//     puts("str1 before memmove ");
//     puts(str1);
//     // Copies contents of str2 to str1
//     memmove(str1, str2, sizeof(str2));
//     puts("\nstr1 after memmove ");
//     puts(str1);
// }
