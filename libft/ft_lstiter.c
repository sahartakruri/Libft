/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:44:48 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 13:44:53 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
}
int	main(void)
{
	t_list	*list = NULL;
	char	*str1 = "hello";
	char	*str2 = "every";
	char	*str3 = "body";
	char	*str4 = "i am new";
	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);
	t_list	*node4 = ft_lstnew(str4);

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	ft_lstadd_back(&list, node4);
	ft_lstiter(list, ft_print);
	//printf("\n%d", ft_lstsize(list));
	//printf("%s", (char *)ft_lstlast(list)->content);
	return (0);
}*/