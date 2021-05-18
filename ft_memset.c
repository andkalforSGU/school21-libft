#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char	*destcpy;

	destcpy = (char *)dest;
	while (len > 0)
	{
		*destcpy = (char)c;
		destcpy++;
		len--;
	}
	return (dest);
}
