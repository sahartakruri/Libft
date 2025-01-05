

#include "libft.h"

void	del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str1 = "hello";
	t_list	*node1 = ft_lstnew(str1);
	printf("before %s ->", (char *)node1->content);

	ft_lstdelone(node1, del);
	printf("/n after%s ->", (char *)node1->content);
	return (0);
}
*/