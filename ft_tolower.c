/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:21:42 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/08 10:43:51 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char c = 'b';
// 	printf("%d\n", tolower(c));
// 	printf("%d\n", ft_tolower(c));
// }