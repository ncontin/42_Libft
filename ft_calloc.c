/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noscrub <noscrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:24:57 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/12 12:35:27 by noscrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
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
