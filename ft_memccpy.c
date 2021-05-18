#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*srccpy;
	unsigned char	*destcpy;
	unsigned char	a;
	size_t			i;

	srccpy = (unsigned char *)src;
	destcpy = (unsigned char *)dest;
	a = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		destcpy[i] = srccpy[i];
		if (srccpy[i] == a)
		{
			destcpy[i] = srccpy[i];
			return ((void *)&destcpy[i + 1]);
		}
		i++;
		n--;
	}
	return (NULL);
}
