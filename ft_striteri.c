/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:16:38 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/17 17:28:40 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// void	ft_tolow(unsigned int i, char *c)
// {
// 	if (*c >= 'A' && *c <= 'Z')
// 		*c += 32;
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "LoReM iPsUm";

// 	ft_striteri(str, ft_tolow);
// 	printf("%s\n", str);
// }
