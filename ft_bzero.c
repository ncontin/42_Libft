/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:12:24 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/14 12:34:16 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
// int	main(void)
// {
// 	char	str[50] = "GeeksForGeeks is for programming geeks.";

// 	printf("\nBefore bzero(): %s\n", str);
// 	ft_bzero(str, 2);
// 	printf("After bzero():\n");
// }
