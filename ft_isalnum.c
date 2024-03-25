#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_isalnum(av[1][0]));
	return (0);
}
