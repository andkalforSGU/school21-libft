#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelem;

	newelem = NULL;
	newelem = malloc(sizeof(t_list));
	if (newelem)
	{
		newelem->content = content;
		newelem->next = NULL;
		return (newelem);
	}
	return (NULL);
}
