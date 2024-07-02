/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:53:01 by tchobert          #+#    #+#             */
/*   Updated: 2024/07/02 12:14:09 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*str_joined;
	
	len_s1 = 0;
	len_s2 = 0;
	if (s1)
		len_s1 = ft_strlen(s1);
	if (s2)
		len_s2 = ft_strlen(s2);
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
