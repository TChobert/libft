#include "libft.h"
/*
char	to_upper(unsigned int index, char c)
{
	(void)index;
	return (ft_toupper(c));
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	output_len;
	char	*output;

	i = 0;
	output_len = ft_strlen(s);
	output = (char *)malloc(sizeof(char) * (output_len + 1));
	if (output == NULL)
	{
		return (NULL);
	}
	while (i < output_len)
	{
		output[i] = f(i, s[i]);
		++i;
	}
	output[i] = '\0';
	return (output);
}
/*
int	main(void)
{
	char	str[] = "bonjour";
	char	*new_str;

	new_str = ft_strmapi(str, to_upper);
	printf("%s\n", new_str);
	return (EXIT_SUCCESS);
}
*/
