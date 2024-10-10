/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:07:56 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/10 17:06:40 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		i--;
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "Bonjour";

// 	printf("%s\n", strrchr(str, 'o'));
// 	printf("%s\n", ft_strrchr(str, 'o'));
// }
