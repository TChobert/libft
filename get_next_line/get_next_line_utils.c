/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <tchobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:54:00 by tchobert          #+#    #+#             */
/*   Updated: 2024/09/17 14:12:05 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	char	*occurence;
	size_t	i;
	size_t	str_size;

	occurence = NULL;
	i = 0;
	str_size = ft_strlen(str);
	while (i < str_size)
	{
		if (str[i] == (char)c)
		{
			occurence = (char *)str + i;
			return (occurence);
		}
		++i;
	}
	return (NULL);
}


