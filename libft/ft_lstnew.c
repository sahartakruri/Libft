/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:50:34 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 12:52:51 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*contents;

	contents = malloc(sizeof(t_list));
	if (contents == NULL)
		return (NULL);
	contents->content = content;
	contents->next = NULL;
	return (contents);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s = "hello everybody";
	t_list	*st;

	st = ft_lstnew(s);
	if (st)
		printf("%s\n%s",(char *)st->content, (char *)st->next);
	else
		printf("allocation failed");
	free(st);
	return (0);
}*/