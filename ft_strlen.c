/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:04:50 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 09:20:05 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "hello";
// 	printf("%d\n", strlen(str));
// 	printf("%d\n", ft_strlen(str));
// }
