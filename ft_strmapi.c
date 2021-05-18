#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char) * (1 + ft_strlen(s)));
	if (result)
	{
		i = 0;
		while (s[i] != '\0')
		{
			result[i] = f(i, (char)s[i]);
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}
