/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:31:50 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/22 09:32:36 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void	ft_toup(void *c)
// {
// 	char	*uc;

// 	uc = (char *)c;
// 	while (*uc)
// 	{
// 		if (*uc >= 'a' && *uc <= 'z')
// 			*uc = *uc - 32;
// 		uc++;
// 	}
// }
// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new1;
// 	t_list	*new2;
// 	t_list	*new3;
// 	t_list	*new4;
// 	t_list	*temp;

// 	list = NULL;
// 	new1 = ft_lstnew(ft_strdup("new1"));
// 	new2 = ft_lstnew(ft_strdup("new2"));
// 	new3 = ft_lstnew(ft_strdup("new3"));
// 	new4 = ft_lstnew(ft_strdup("new4"));
// 	ft_lstadd_front(&list, new1);
// 	ft_lstadd_front(&list, new2);
// 	ft_lstadd_front(&list, new3);
// 	ft_lstadd_front(&list, new4);
// 	ft_lstiter(list, ft_toup);
// 	temp = list;
// 	while (temp != NULL)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// }
