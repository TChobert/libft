#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;
	char	*occurence;

	i = 0;
	s_len = ft_strlen(s) + 1;
	occurence = NULL;
	while (i < s_len)
	{
		if (s[i] == c)
		{
			occurence = (char *)(s + i);
			return (occurence);
		}
		++i;
	}
	return (occurence);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%p\n", ft_strchr(av[1], atoi(av[2])));
	printf("%s\n", ft_strchr(av[1], atoi(av[2])));
	return (EXIT_SUCCESS);
}
*/
