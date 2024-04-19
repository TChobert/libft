#include "libft.h"

static bool	is_sep(char c, char sep)
{
	if (c == sep)
		return (true);
	else
		return (false);
}

static int	ft_substrings_count(char const *s, char c)
{
	size_t			i;
	bool			is_in_substring;
	unsigned int	substrings_count;

	i = 0;
	substrings_count = 0;
	is_in_substring = false;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (is_in_substring)
			{
				++substrings_count;
				is_in_substring = false;
			}
		}
		else
			is_in_substring = true;
		++i;
	}
	if (is_in_substring)
		++substrings_count;
	return (substrings_count);
}

char	*ft_strcpy(char *s, size_t substrings_len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *)malloc(sizeof(char) * (substrings_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (i < substrings_len)
	{
		new_str[i] = s[i];
		++i;
	}
	new_str[i] = '\0';
	return (new_str);
}

static size_t	ft_substrings_len(char *s, char c)
{
	size_t	i;

	i = 0;
	while (is_sep(s[i], c) == false && s[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			j;
	size_t			substrings_len;
	unsigned int	substrings_nb;
	char			*current;
	char			**output;

	i = 0;
	current = (char *)s;
	substrings_nb = ft_substrings_count(s, c);
	output = (char **)malloc(sizeof(char *) * (substrings_nb + 1));
	if (output == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (is_sep(s[i], c) == false)
		{
			substrings_len = ft_substrings_len(&current[i], c);
			output[j++] = ft_strcpy(&current[i], substrings_len);
			i += substrings_len;
		}
		else
			++i;
	}
	output[j] = NULL;
	return (output);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	size_t	i;
	char	**splitted;

	i = 0;
	splitted = ft_split(av[1], av[2][0]);
	while (splitted[i] != NULL)
	{
		printf("%s\n", splitted[i]);
		++i;
	}
	return (EXIT_SUCCESS);
}
*/
