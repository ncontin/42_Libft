/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:36:19 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/10 15:46:35 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (8);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (8);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	char c = ' ';
// 	printf("%d\n", isalnum(c));
// 	printf("%d\n", ft_isalnum(c));
// }
