#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occurence;
	size_t	s_len;

	occurence = NULL;
	s_len = ft_strlen(s) + 1;
	while (s_len > 0)
	{
		if (s[s_len - 1] == c)
		{
			occurence = (char *)(s + s_len - 1);
			return (occurence);
		}
		--s_len;
	}
	return (occurence);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %p\n", ft_strrchr(av[1], atoi(av[2])));
	printf("mine = %s\n", ft_strrchr(av[1], atoi(av[2])));
	printf("true = %p\n", strrchr(av[1], atoi(av[2])));
	printf("true = %s\n", strrchr(av[1], atoi(av[2])));
	return (EXIT_SUCCESS);
}
*/
