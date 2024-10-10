/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:28:52 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/10 15:54:30 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr_s1;
	char	*ptr_s2;
	size_t	i;

	i = 0;
	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[10] = "hello";
// 	char	str2[10] = "q";

// 	printf("%d\n", ft_memcmp(str1, str2, 3));
// 	printf("%d\n", memcmp(str1, str2, 3));
// }
