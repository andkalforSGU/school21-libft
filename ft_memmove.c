#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*srccpy;
	char	*destcpy;
	size_t	i;

	if (dest <= src)
	{
		return (ft_memcpy(dest, src, len));
	}
	srccpy = (char *)src + len - 1;
	destcpy = (char *)dest + len - 1;
	i = 0;
	while (len > 0)
	{
		destcpy[i] = srccpy[i];
		i--;
		len--;
	}
	return (dest);
}
