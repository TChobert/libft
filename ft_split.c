/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <tchobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:03:01 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/25 12:20:05 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(const char *str, char sep)
{
	size_t				i;
	size_t				nb_strs;
	bool				is_sep;

	is_sep = true;
	i = 0;
	nb_strs = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep && is_sep == true)
		{
			is_sep = false;
			++nb_strs;
		}
		else if (str[i] == sep)
		{
			is_sep = true;
		}
		++i;
	}
	return (nb_strs);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
	{
		++len;
	}
	return (len);
}

static void	skip_separator(char const **s, char c)
{
	size_t	i;

	i = 0;
	while ((*s)[i] == c && (*s)[i] != '\0')
	{
		++(*s);
	}
}

static void	free_and_null(char **output)
{
	size_t	i;

	i = 0;
	while (output[i] != NULL)
	{
		free(output[i]);
		output[i] = NULL;
		++i;
	}
	free(output);
	output = NULL;
}

char	**ft_split(char const *s, char c)
{
	const size_t	output_size = count_strs(s, c);
	size_t			i;
	size_t			word_len;
	char			**output;

	i = 0;
	output = (char **)malloc(sizeof(char *) * (output_size + 1));
	if (output != NULL)
	{
		output[output_size] = (NULL);
		while (i < output_size)
		{
			skip_separator(&s, c);
			word_len = get_word_len(s, c);
			output[i] = ft_substr(s, 0, word_len);
			if (output[i] == NULL)
			{
				free_and_null(output);
				return (NULL);
			}
			s += word_len;
			++i;
		}
	}
	return (output);
}

/*
int main(void)
{
	int i = 0;
	char **output;

	output = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	while (output[i] != NULL)
	{
		printf("%s\n", output[i]);
		++i;
	}

	return (EXIT_SUCCESS);
}

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
