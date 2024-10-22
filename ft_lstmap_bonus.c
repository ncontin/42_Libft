/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:06:52 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 10:16:24 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_el;
	void	*check;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		check = f(lst->content);
		if (!check)
			ft_lstclear(&new_lst, del);
		new_el = ft_lstnew(check);
		if (new_el == NULL)
		{
			free(check);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_el);
		lst = lst->next;
	}
	return (new_lst);
}

// #include <stdio.h>

// void	*ft_toup(void *content)
// {
// 	char	*uc;
// 	char	*new_content;
// 	char	*result;

// 	uc = (char *)content;
// 	new_content = ft_strdup(uc);
// 	result = new_content;
// 	while (*new_content)
// 	{
// 		if (*new_content >= 'a' && *new_content <= 'z')
// 		{
// 			*new_content -= 32;
// 		}
// 		new_content++;
// 	}
// 	return (result);
// }
// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*new_list;
// 	t_list	*og_list;

// 	list = NULL;
// 	node1 = ft_lstnew(ft_strdup("node1"));
// 	node2 = ft_lstnew(ft_strdup("node2"));
// 	node3 = ft_lstnew(ft_strdup("node3"));
// 	node4 = ft_lstnew(ft_strdup("node4"));
// 	ft_lstadd_front(&list, node4);
// 	ft_lstadd_front(&list, node3);
// 	ft_lstadd_front(&list, node2);
// 	ft_lstadd_front(&list, node1);
// 	og_list = list;
// 	while (og_list)
// 	{
// 		printf("list: %s\n", (char *)og_list->content);
// 		og_list = og_list->next;
// 	}
// 	new_list = ft_lstmap(list, ft_toup, free);
// 	while (new_list)
// 	{
// 		printf("new_list: %s\n", (char *)new_list->content);
// 		new_list = new_list->next;
// 	}
// }
