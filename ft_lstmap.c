/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:06:52 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/17 13:38:25 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_el;

	new_lst = NULL;
	while (lst != NULL)
	{
		new_el = ft_lstnew((*f)(lst->content));
		if (new_el == NULL)
		{
			(*del)(new_lst);
			free(new_lst);
		}
		ft_lstadd_back(&new_lst, new_el);
		lst = lst->next;
	}
	return (new_lst);
}
