/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:33:22 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/10 17:20:41 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The	strchr(void) function returns a pointer to the first occurrence of the character c in the string s.
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "foobar";
// 	printf("%s\n", strchr(str, 'o'));
// 	printf("%s\n", ft_strchr(str, 'o'));
// }
