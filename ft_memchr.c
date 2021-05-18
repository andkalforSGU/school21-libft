#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*scpy;
	size_t			i;

	scpy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (scpy[i] == (unsigned char)c)
		{
			return ((void *)&scpy[i]);
		}
		i++;
	}
	return (NULL);
}
