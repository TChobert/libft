#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;
	
	len = 0;
	while (s[len] != '\0')
	{
		++len;
	}
	return (len);
}

/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %zu\n", ft_strlen(av[1]));
	printf("true = %zu\n", strlen(av[1]));
	return (EXIT_SUCCESS);
}
*/
