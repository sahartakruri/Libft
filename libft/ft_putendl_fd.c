
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd,"\n", 1);
}
/*
int	main(void)
{
	char	*s = "hello everybody";
	int	i = 1;

	ft_putendl_fd(s, i);
	ft_putendl_fd(s, i);
       return (0);
}
*/