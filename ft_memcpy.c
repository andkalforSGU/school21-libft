#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*srccpy;
	unsigned char	*destcpy;

	srccpy = (unsigned char *)src;
	destcpy = (unsigned char *)dest;
	if (n == 0 || destcpy == srccpy)
		return (dest);
	while (n > 0)
	{
		*destcpy = *srccpy;
		destcpy++;
		srccpy++;
		n--;
	}
	return (dest);
}
