

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
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
	//printf("\n%d", ft_lstsize(list));
	printf("%s", (char *)ft_lstlast(list)->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/