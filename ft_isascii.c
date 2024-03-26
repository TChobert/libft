#include "libft.h"
#include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %d\n", ft_isascii(atoi(av[1])));
	printf("true = %d\n", isascii(atoi(av[1])));
	return (0);
}
*/
