/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:37:17 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/24 12:02:19 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void))
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*next;
	void	*new_content;

	new_lst = NULL;
	current = lst;
	while (current != NULL)
	{
		next = current->next;
		new_content = (f)(current->content);
		new_lst = ft_lstnew(new_content);
		if (new_lst == NULL)
		{
			return (NULL);
		}
		del(current->content);
		free(current);
		current = next;
	}
	return (new_lst);
}
