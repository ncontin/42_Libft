/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:50:14 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/16 13:19:15 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*current;

	counter = 0;
	current = lst;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;

// 	list = ft_lstnew("list");
// 	node1 = ft_lstnew("node1");
// 	node2 = ft_lstnew("node2");
// 	node3 = ft_lstnew("node3");
// 	node4 = ft_lstnew("node4");
// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);
// 	ft_lstadd_front(&list, node3);
// 	ft_lstadd_front(&list, node4);
// 	printf("%d\n", ft_lstsize(list));
// }
