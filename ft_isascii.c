/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:55:28 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/10 16:04:58 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char c = 'c';
// 	printf("%d\n", isascii(c));
// 	printf("%d\n", ft_isascii(c));
// }
