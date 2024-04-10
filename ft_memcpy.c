#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	t_byte	current_dest;
	t_byte	current_src;
	size_t	size;

	current_dest = dest;
	current_src = (t_byte)src;
	size = 0;
	while (size < n)
	{
		current_dest[size] = current_src[size];
		++size;
	}
	return (dest);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	char	buffer[20];
	char	buffer2[20];

	ft_memcpy(buffer, av[1], atoi(av[2]));
	memcpy(buffer2, av[1], atoi(av[2]));
	printf("mine = %s\n", buffer);
	printf("true = %s\n", buffer2);
	return (EXIT_SUCCESS);
}
*/
