/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:09:14 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/17 12:31:38 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	while (*lst)
	{
		node = *lst;
		(*del)(node->content);
		*lst = node->next;
		free(node);
	}
	*lst = NULL;
}

// void	ft_del(void *content)
// {
// 	free(content);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	void	(*ptr)(void *);

// 	node1 = (ft_lstnew(ft_strdup("node1")));
// 	node2 = (ft_lstnew(ft_strdup("node2")));
// 	node3 = (ft_lstnew(ft_strdup("node3")));
// 	node4 = (ft_lstnew(ft_strdup("node4")));
// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);
// 	ft_lstadd_front(&list, node3);
// 	ft_lstadd_front(&list, node4);
// 	ptr = ft_del;
// 	printf("%s\n", (char *)node1->content);
// 	ft_lstclear(&list, ptr);
// 	if (list == NULL)
// 		printf("list content deleted");
// }
