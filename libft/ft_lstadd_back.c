/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:49:39 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 12:53:17 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

/*

#include <stdio.h>

int	main(void)
{
	t_list	*list;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	list = NULL;
	str1 = "hello";
	str2 = "every";
	str3 = "body";
	str4 = "i am new";
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);
	node4 = ft_lstnew(str4);
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	ft_lstadd_back(&list, node4);
	while(list != NULL)
	{
		printf("%s ->", (char *)list->content);
		list = list->next;
	}
	//printf("\n%d", ft_lstsize(list));
	//printf("%s", (char *)ft_lstlast(list)->content);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	return (0);
}
*/