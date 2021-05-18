#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*flag;

	flag = lst;
	while (flag)
	{
		f(flag->content);
		flag = flag->next;
	}
}
