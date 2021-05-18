#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	temp = NULL;
	i = ft_strlen(s);
	if ((char)c == '\0' && s[ft_strlen(s)] == (char)c)
		return ((char *)s + i);
	while (*s)
	{
		if (*s == (char)c)
		{
			temp = (char *)s;
		}
		s++;
	}
	return (temp);
}
