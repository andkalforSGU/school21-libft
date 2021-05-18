#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((ss1[i] != '\0' || ss2[i] != '\0') && n > 0)
	{
		if (ss1[i] != ss2[i])
		{
			if (ss1[i] > ss2[i])
				return (1);
			return (-1);
		}
		i++;
		n--;
	}
	return (0);
}
