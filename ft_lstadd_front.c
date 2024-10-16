/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:50:32 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/16 12:41:26 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*list;
// 	int		i;

// 	i = 0;
// 	node1 = ft_lstnew("content1");
// 	node2 = ft_lstnew("content2");
// 	node3 = ft_lstnew("content3");
// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);
// 	ft_lstadd_front(&list, node3);
// 	// t_list	*node_new;
// 	// node_new = ft_lstnew("new");
// 	// ft_lstadd_front(&list, node_new);
// 	printf("%s\n", (char *)list->content);
// }
