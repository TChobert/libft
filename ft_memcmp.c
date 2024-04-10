#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_byte	current_s1;
	t_byte	current_s2;
	size_t	i;

	current_s1 = (t_byte)s1;
	current_s2 = (t_byte)s2;
	i = 0;
	while (i < n)
	{
		if (current_s1[i] != current_s2[i])
		{
			return (current_s1[i] - current_s2[i]);
		}
		++i;
	}
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("true = %d\n", memcmp(av[1], av[2], atoi(av[3])));
	return (EXIT_SUCCESS);
}
