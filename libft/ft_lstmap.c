/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:45:12 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 18:19:25 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*element;
	void	*content;

	new_list = NULL;
	if (f == NULL || lst == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		element = ft_lstnew(content);
		if (element == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, element);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

void	*ft_skip2(void *content)
{
	char	*n;

	n = (char *)content + 2;
	return (n);
}

void	del(void *content)
{
	free(content);
}

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
	t_list	*newstr;

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
	newstr = ft_lstmap(list, ft_skip2, del);
	while (newstr != NULL)
	{
		printf("%s ->", (char *)newstr->content);
		newstr = newstr->next;
	}
	// printf("\n%d", ft_lstsize(list));
	// printf("%s", (char *)ft_lstlast(list)->content);
	return (0);
}*/