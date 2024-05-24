/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:54:52 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/24 11:56:05 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static char	to_upper(unsigned int index, char c)
{
	(void)index;
	return (ft_toupper(c));
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	const size_t	output_len = ft_strlen(s);
	char			*output;

	i = 0;
	output = (char *)malloc(sizeof(char) * (output_len + 1));
	if (output == NULL)
	{
		return (NULL);
	}
	while (i < output_len)
	{
		if (f != NULL)
		{
			output[i] = f(i, s[i]);
		}
		++i;
	}
	output[i] = '\0';
	return (output);
}

/*
int	main(int ac, char **av)
{
	(void)ac;
//	char	str[] = "bonjour";
	char	*new_str;

	new_str = ft_strmapi(av[1], to_upper);
	printf("%s\n", new_str);
	return (EXIT_SUCCESS);
}
*/
