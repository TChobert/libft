/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstrv2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:09:58 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/22 14:10:22 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			little_len;
	char			*occurence;

	occurence = (char *)big;
	little_len = ft_strlen(little);
	if (*little == '\0')
		return (occurence);
	if (*big == '\0' || len == 0 || little_len > len)
		return (NULL);
	i = 0;
	while (i <= len - little_len)
	{
		if (big[i] == *little)
		{
			occurence = (char *)big + i;
			if (ft_strcmp(big + i, little) == 0)
			{
				return (occurence);
			}
		}
		++i;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	big[] = "Hello World Warld";
	const char	little[] = "Warld";

	printf("%s\n", ft_strnstr(big, little, 17));
	return (EXIT_SUCCESS);
}
*/
