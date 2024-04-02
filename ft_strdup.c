#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_size;
	char	*duplicate_s;

	i = 0;
	s_size = ft_strlen(s);
	duplicate_s = (char *)malloc(sizeof(char) * (s_size + 1));
	if (duplicate_s == NULL)
	{
		return (duplicate_s);
	}
	while (i < s_size)
	{
		duplicate_s[i] = s[i];
		++i;
	}
	duplicate_s[i] = '\0';
	return (duplicate_s);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	char	*ptr;
	ptr = ft_strdup(av[1]);
	if (ptr == NULL)
	{
		return (-1);
	}
	printf("%s\n", ptr);
	return (EXIT_SUCCESS);
}
*/
