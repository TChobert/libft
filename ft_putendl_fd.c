#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(10, fd);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	ft_putendl_fd(av[1], STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
*/
