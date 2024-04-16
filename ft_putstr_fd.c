#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	ft_putstr_fd(av[1], STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
*/
