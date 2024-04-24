#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void))
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*next;

	new_lst = NULL;
	current = lst;
	while (current != NULL)
	{
		void	*new_content;

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
