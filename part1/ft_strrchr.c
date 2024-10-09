/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:07:56 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/08 11:21:59 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
	{
		i++;
		return ((char *)&s[i]);
	}
	return ('\0');
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "foobar";
// 	printf("%d\n", strrchr(str, 'o'));
// 	printf("%d\n", ft_strrchr(str, 'o'));
// }