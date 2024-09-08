/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_char_set.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <tchobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:20 by tchobert          #+#    #+#             */
/*   Updated: 2024/09/08 14:55:37 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	is_in_charset(const char c, char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (true);
		++i;
	}
	return (false);
}

size_t	ft_count_words_charset(const char *str, char *charset)
{
	size_t				i;
	size_t				nb_words;
	bool				is_sep;

	is_sep = true;
	i = 0;
	nb_words = 0;
	while (str[i] != '\0')
	{
		if (is_in_charset(str[i], charset) ==false && is_sep == true)
		{
			is_sep = false;
			++nb_words;
		}
		else if (is_in_charset(str[i], charset) == true)
		{
			is_sep = true;
		}
		++i;
	}
	return (nb_words);
}

static size_t	get_word_len(char const *s, char *charset)
{
	size_t	len;

	len = 0;
	while (is_in_charset(s[len], charset) == false && s[len] != '\0')
	{
		++len;
	}
	return (len);
}

static void	skip_separator(char const **s, char *charset)
{
	size_t	i;

	i = 0;
	while (is_in_charset((*s)[i], charset) && (*s)[i] != '\0')
	{
		++(*s);
	}
}

char	**ft_split_charset(char const *s, char *charset)
{
	const size_t	output_size = ft_count_words_charset(s, charset);
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
			skip_separator(&s, charset);
			word_len = get_word_len(s, charset);
			output[i] = ft_substr(s, 0, word_len);
			if (output[i] == NULL)
			{
				ft_free_and_null(output);
				return (NULL);
			}
			s += word_len;
			++i;
		}
	}
	return (output);
}

int main(void)
{
	int i = 0;
	char **output;

	output = ft_split_charset(":^**^:^1^:*:^2a,^^::^^3^^**^^--h^^^*^:", "^:*");
	while (output[i] != NULL)
	{
		printf("%s\n", output[i]);
		++i;
	}
	ft_free_and_null(output);
	return (EXIT_SUCCESS);
}

// int	main(int ac, char **av)
// {
// 	(void)ac;
// 	size_t	i;
// 	char	**splitted;

// 	i = 0;
// 	splitted = ft_split(av[1], av[2][0]);
// 	while (splitted[i] != NULL)
// 	{
// 		printf("%s\n", splitted[i]);
// 		++i;
// 	}
// 	return (EXIT_SUCCESS);
// }
