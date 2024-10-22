/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:21:11 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 10:23:08 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*el;

	el = (t_list *)malloc(sizeof(t_list));
	if (el == NULL)
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*new;

// 	// t_list	*nbr;
// 	// nbr = ft_lstnew(10);
// 	new = ft_lstnew("Hello");
// 	printf("%s\n", (char *)new->content);
// 	// printf("%d\n", (int *)nbr->content);
// 	free(new);
// }
