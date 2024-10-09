/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:33:22 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/08 17:19:45 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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