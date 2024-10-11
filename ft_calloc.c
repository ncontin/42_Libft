/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:24:57 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/11 11:41:50 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0 || ptr == 0)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
// int	main(void)
// {
// 	int	n;
// 	int	*array;
// 	int	i;

// 	n = 5;
// 	array = (int *)calloc(n, sizeof(int));
// 	if (array == NULL)
// 	{
// 		fprintf(stderr, "Memory allocation failed!\n");
// 		return (1);
// 	}
// 	i = 0;
// 	printf("Array after calloc:");
// 	while (i < n)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(array);
// }
