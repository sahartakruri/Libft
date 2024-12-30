
#include "libft.h"

int	ft_check(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t	start;
    size_t	end;
    size_t	len;
	size_t	i;
    char	*s2;

    start = 0;
	if (s1 == NULL || set == NULL)
        return NULL;

    len = ft_strlen(s1);

    while (s1[start] != '\0' && ft_check(set, s1[start]))
    {
        start++;
    }
	if (start == len)
   		{
			s2 = (char *)malloc(1 * sizeof(char));
			if (s2 == NULL)
				return (NULL);
			s2[0] = '\0';
			return (s2);
		}
	end = len - 1;
    while (end > start && ft_check(set, s1[end]))
    {
        end--;
    }
	s2 = (char *)malloc((end - start + 2) * sizeof(char));
    if (s2 == NULL)
        return NULL;
    i = 0;
    while (start <= end)
    {
        s2[i] = s1[start];
		i++;
		start++;
    }
    s2[i] = '\0';
    return (s2);
}
/*
int	main(void)
{
	char	s[20] = "hello everybody nha";
	char	set[10] = "hea";
	char	*news;
	news = ft_strtrim(s, set);
	if (news != NULL)
		printf("%s", news);
	free (news);
	return (0);
}*/