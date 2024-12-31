

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	c;
	int	i;

	c = 'M';
	i = 1;
	ft_putchar_fd(c,i);
	return (0);
}
*/