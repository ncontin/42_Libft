/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:35:01 by ncontin           #+#    #+#             */
/*   Updated: 2024/10/21 12:50:03 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
	lst = NULL;
}

// #include <stdio.h>

// void	ft_del(void *content)
// {
// 	free(content);
// 	content = NULL;
// 	// free(content);
// }
// int	main(void)
// {
// 	t_list	*node1;
// 	void	(*ptr)(void *);

// 	ptr = ft_del;
// 	// node1 = ft_lstnew(ft_strdup("Hello"));
// 	node1 = ft_lstnew(ft_strdup("Hello"));
// 	printf("%s\n", (char *)node1->content);
// 	ft_lstdelone(node1, ptr);
// 	printf("%s\n", (char *)node1->content);
// 	printf("content deleted");
// }
