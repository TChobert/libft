#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		if (f != NULL)
		{
			f(lst->content);
		}
		lst = lst->next;
	}
}
