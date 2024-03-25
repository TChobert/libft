#include "libft.h"

static bool	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static bool	is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (is_lower(c) || is_upper(c));
}

/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_isalpha(av[1][0]));
	return (EXIT_SUCCESS);
}
*/
