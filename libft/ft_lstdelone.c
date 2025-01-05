/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:50:17 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 14:35:34 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void	del(void *content)
{
	free(content);
}


int	main(void)
{
	char	*str1;
	t_list	*node1;

	str1 = "hello";
	node1 = ft_lstnew(str1);
	printf("before %s ->", (char *)node1->content);
	ft_lstdelone(node1, del);
	printf("/n after%s ->", (char *)node1->content);
	return (0);
}
*/