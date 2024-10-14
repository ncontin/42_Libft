/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:45:34 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/14 17:01:36 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_len(int n)
{
	int	counter;
	int	nb;

	nb = n;
	counter = 0;
	if (nb <= 0)
	{
		nb *= -1;
		counter++;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		nb;

	nb = n;
	len = find_len(n);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == -2147483648)
	{
		res = ft_strdup("-2147483648");
		return (res);
	}
	if (n < 0)
		n *= -1;
	while (len-- >= 0)
	{
		res[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (nb < 0)
		res[0] = '-';
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", find_len(0));
// 	printf("%s\n", ft_itoa(-333456));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(333456));
// 	printf("%s\n", ft_itoa(-2147483648));
// }