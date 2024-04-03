#include "libft.h"

static char	*ft_strndup(char *s, size_t n)
{
	size_t	i;
	char	*duplicated;

	i = 0;
	duplicated = (char *)malloc(sizeof(char) * (n + 1));
	if (duplicated == NULL)
	{
		return (duplicated);
	}
	while (i < n)
	{
		duplicated[i] = s[i];
		++i;
	}
	duplicated[i] = '\0';
	return (duplicated);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*start_flag;
	char	*substring;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (NULL);
	}
	start_flag = (char *)s + start;
	substring = ft_strndup(start_flag, len);
	if (substring == NULL)
	{
		return (NULL);
	}
	return (substring);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	printf("%p\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (EXIT_SUCCESS);
}
*/
