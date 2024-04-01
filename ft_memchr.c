#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*occurence = (unsigned char *)s;
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (occurence[i] == c)
		{
			return (char *)(s + i);
		}
		++i;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %p\n", ft_memchr(av[1], atoi(av[2]), strlen(av[1])));
	printf("mine = %s\n", ft_memchr(av[1], atoi(av[2]), strlen(av[1])));
	printf("true = %p\n", ft_memchr(av[1], atoi(av[2]), strlen(av[1])));
	printf("true = %s\n", ft_memchr(av[1], atoi(av[2]), strlen(av[1])));
}
*/
