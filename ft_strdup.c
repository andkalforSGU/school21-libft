#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*cpy;

	len = ft_strlen(str);
	i = 0;
	cpy = malloc(sizeof(char) * len + 1);
	if (cpy)
	{
		while (str[i])
		{
			cpy[i] = (char)str[i];
			i++;
		}
		cpy[i] = '\0';
		return (cpy);
	}
	return (NULL);
}
