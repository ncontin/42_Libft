/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 07:51:55 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/10 15:51:24 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;

	i = 0;
	ptr_s = (unsigned char *)s;
	while (i < n)
	{
		if (ptr_s[i] == c)
			return (&ptr_s[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[50] = "This is a test";
// 	char	*a;
// 	char	*b;

// 	a = ft_memchr(str, 'a', 10);
// 	b = memchr(str, 'a', 10);
// 	printf("%s\n", a);
// 	printf("%s\n", b);
// }
