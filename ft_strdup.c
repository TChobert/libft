#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*duplicated_str;

	duplicated_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (duplicated_str != NULL)
	{
		duplicated_str = ft_strcpy(duplicated_str, s);
	}
	return (duplicated_str);
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
