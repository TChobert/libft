#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*u_s1 = (const unsigned char *)s1;
	const unsigned char	*u_s2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while ((u_s1[i] != '\0' || u_s2[i] != '\0') && i < n)
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
	printf("mine = %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("true = %d\n", strncmp(av[1], av[2], atoi(av[3])));
	return (EXIT_SUCCESS);
}
*/
