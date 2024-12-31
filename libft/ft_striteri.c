
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
char	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

void to_uppercase(unsigned int index, char *c)
{
    *c = (char)ft_toupper(*c);
	index = 0 + index;
}

int main(void) {
    char str[] = "hello world";
	printf("origional string:%s\n", str);
    ft_striteri(str, to_uppercase);
    printf("Modified string: %s\n", str);
    
    return 0;
}*/