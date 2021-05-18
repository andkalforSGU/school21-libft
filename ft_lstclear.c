#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextadr;

	nextadr = *lst;
	while (*lst)
	{
		nextadr = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(nextadr);
	}
}
