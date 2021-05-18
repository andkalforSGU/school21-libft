#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelem;
	t_list	**newhead;
	t_list	*flag1;
	t_list	*flag2;

	flag1 = lst;
	flag2 = NULL;
	newhead = &flag2;
	while (flag1)
	{
		newelem = ft_lstnew(f(flag1->content));
		if (newelem)
		{
			ft_lstadd_back(newhead, newelem);
			flag1 = flag1->next;
		}
		else
		{
			ft_lstclear(newhead, del);
			return (NULL);
		}
	}
	return (*newhead);
}
