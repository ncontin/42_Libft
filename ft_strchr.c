/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:33:22 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 10:57:14 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	let;

	i = 0;
	len = ft_strlen(s);
	let = c;
	while (i <= len)
	{
		if (s[i] == let)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "foobar";
// 	printf("%s\n", strchr(str, 'o'));
// 	printf("%s\n", ft_strchr(str, 'o'));
// }
