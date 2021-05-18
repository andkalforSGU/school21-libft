#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(size * count);
	if (mem)
		return (ft_memset(mem, 0, count * size));
	return (NULL);
}
