/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:25:05 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/08 10:43:44 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char c = '1';
// 	printf("%d\n", isdigit(c));
// 	printf("%d\n", ft_isdigit(c));
// }
