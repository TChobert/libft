#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	size_t			i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (u_s1[i] != u_s2[i])
		{
			return (u_s1[i] - u_s2[i]);
		}
		++i;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("true = %d\n", memcmp(av[1], av[2], atoi(av[3])));
	return (EXIT_SUCCESS);
}
*/
