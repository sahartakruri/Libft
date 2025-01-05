

#include "libft.h"

void	del(void *content)
{
	free(content);
}

void	 ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (del == NULL || lst == NULL)
		return ;
	while (*lst  != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

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
	ft_lstclear(&list, del);
	if (!list)
		printf("the list is cleared");
//	while(list != NULL)
//	{
//		printf("%s ->", (char *)list->content);
//		list = list->next;
//	}
	//printf("\n%d", ft_lstsize(list));
	//printf("%s", (char *)ft_lstlast(list)->content);
	return (0);
}*/