#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*flag;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	flag = (*lst);
	while (flag->next != NULL)
		flag = flag->next;
	flag->next = new;
}
