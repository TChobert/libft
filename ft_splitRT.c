/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitRT.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:39:07 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/22 20:12:08 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	count_strs(const char *str, char sep)
{
	size_t				i;
	unsigned int		nb_strs;
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

char	*ft_strduplicate(char *str, char sep)
{
	size_t	i;
	char	*new_str;

	i = 0;
	while (str[i] != sep && str[i] != '\0')
	{
		++i;
	}
	new_str = (char *)malloc(sizeof(char) * (i + 1));
	if (new_str != NULL)
	{
		ft_strlcpy(new_str, str, i);
	}
	//printf("%s\n", new_str);
	return (new_str);
}

char	*consume_separators(char *current, char sep)
{
	size_t	i;

	i = 0;
	while (current[i] ==sep)
	{
		++current;
		++i;
	}
	return (current);
}

char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			output_size;
	char			*current;
	char			**output;

	i = 0;
	output_size = count_strs(s, c);
	current = (char *)s;
	output = (char **)malloc(sizeof(char *) * (output_size + 1));
	if (output != NULL)
	{
		output[count_strs(s, c)] = (NULL);
		while (i < output_size)
		{
			output[i] = ft_strduplicate(current, c);
			/*
			if (output[i] == NULL)
			{
				free_and_null(output, i);
				return (NULL);
			}
			*/
			printf("%s\n", current);
			current = consume_separators(current, c);
			++i;
		}
		output[output_size] = NULL;
	}
	return (output);
}

/*
int main(void)
{
	char	test[] = "";
	char	sep;

	sep = 'U';
	printf("%d\n", ft_count_words(test, sep));
	return (EXIT_SUCCESS);
}
*/

int	main(int ac, char **av)
{
	(void)ac;
	size_t	i;
	char	**splitted;

	i = 0;
	splitted = ft_split(av[1], av[2][0]);
	//while (splitted[i] != NULL)
	//{
	//	printf("%s\n", splitted[i]);
	//	++i;
	//}
	return (EXIT_SUCCESS);
}

