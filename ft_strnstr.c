#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	char	*output;

	output = (char *)(big);
	little_len = ft_strlen(little);
	if (little_len > len)
		return (NULL);
	if (*little == '\0')
	{
		return (output);
	}
	while (*big != '\0' && len >= little_len)
	{
		if (ft_strncmp(big, little, len) == 0)
		{
			return (output);
		}
		++big;
		--len;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	char	str1[] = "";
	char	str2[] = "";
	(void)ac;
	(void)av;
//	printf("%s\n", ft_strnstr(str1, str2, 3));
	printf("%p\n", ft_strnstr(str1, str2, 3));
	return (EXIT_SUCCESS);
}
*/
