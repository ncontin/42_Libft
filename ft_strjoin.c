/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:26:23 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/13 23:54:21 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tot_len;
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	tot_len = (ft_strlen(s1) + ft_strlen(s2));
	res = malloc(tot_len + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("hello", "bonjour"));
// }