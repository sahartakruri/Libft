/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:50:44 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 12:51:07 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
	//while(list != NULL)
	//{
	//	printf("%s ->", (char *)list->content);
	//	list = list->next;
	//}
	printf("\n%d", ft_lstsize(list));
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/