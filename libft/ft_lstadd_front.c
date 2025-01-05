/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:49:53 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 12:53:27 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list = NULL;
	char	*str1 = "hello";
	char	*str2 = "every";
	char	*str3 = "body";
	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	while(list != NULL)
	{
		printf("%s ->", (char *)list->content);
		list = list->next;
	}
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/