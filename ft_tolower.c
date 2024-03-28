#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("%c\n", ft_tolower(av[1][0]));
	return (EXIT_SUCCESS);
}
*/
