/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:12:21 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 10:56:58 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char c = 'b';
// 	printf("%d\n", toupper(c));
// 	printf("%d\n", ft_toupper(c));
// }
