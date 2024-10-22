/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:48:53 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 10:46:37 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd((n / 10), fd);
	n = (n % 10) + '0';
	write(fd, &n, 1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	ft_putnbr_fd(99, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-99, 1);
// 	printf("\n");
// 	ft_putnbr_fd(0, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-57, 2);
// 	printf("\n");
// 	ft_putnbr_fd(-987441, 2);
// 	printf("\n");
// }
