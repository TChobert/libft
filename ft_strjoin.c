#include "libft.h"

static void	ft_strcat(char *dest, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		++i;
	}
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		++j;
		++i;
	}
	dest[i] = '\0';
}

// secu si dest pas assez grande ?
// si S1 + S2 = vides ?

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	final_len;
	char	*str_joined;

	final_len = ft_strlen(s1) + ft_strlen(s2);
	str_joined = (char *)malloc(sizeof(char) * (final_len + 1));
	if (str_joined == NULL)
	{
		return (NULL);
	}
	ft_strcat(str_joined, s1, s2);
	return (str_joined);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	char	*joined;
	joined = ft_strjoin(av[1], av[2]);
	printf("%s\n", joined);
	printf("%p\n", joined);
	return (EXIT_SUCCESS);
}
*/
