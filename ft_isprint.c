#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %d\n", ft_isprint(atoi(av[1])));
	printf("true = %d\n", isprint(atoi(av[1])));
	return (EXIT_SUCCESS);
}
*/
