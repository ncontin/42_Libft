/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:01:04 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/09 12:54:13 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = (char)c;
		i++;
	}
	return (s);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);
	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str, '.', 8 * sizeof(char));
	printf("After memset():  %s\n", str);
}
