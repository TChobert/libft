#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;
	
	size = 0;
	while (s[size] != '\0')
	{
		++size;
	}
	return (size);
}

/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %ld\n", ft_strlen(av[1]));
	printf("true = %ld\n", strlen(av[1]));
	return (EXIT_SUCCESS);
}
*/
