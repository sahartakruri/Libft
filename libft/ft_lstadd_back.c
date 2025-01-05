

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