/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:59:00 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/08 10:57:51 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char c = '	';
// 	printf("%d\n", isprint(c));
// 	printf("%d\n", ft_isprint(c));
// }