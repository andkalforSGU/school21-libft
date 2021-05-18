#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	if (destsize > 0)
	{
		while (i < destsize - 1 && src[i])
		{
			dest[i] = (char)src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
