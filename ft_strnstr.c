/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:23:00 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/11 18:20:34 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = (ft_strlen(little));
	if (little_len == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j] && little[j] == big[i + j])
		{
			j++;
			if (j == little_len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	str[20] = "Foo Bar Baz";
// 	const char	substr[10] = "Bar";
// 	char		*result;

// 	result = ft_strnstr(str, substr, 4);
// 	printf("The substring is: %s\n", result);
// }
