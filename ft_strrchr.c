/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:07:56 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/11 17:44:44 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	let;
	int		len;

	let = c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == let)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "Bonjour";

// 	printf("%s\n", strrchr(str, 'o'));
// 	printf("%s\n", ft_strrchr(str, 'o'));
// }
