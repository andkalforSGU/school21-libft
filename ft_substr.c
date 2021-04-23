/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:01:16 by tvader            #+#    #+#             */
/*   Updated: 2021/04/23 16:57:45 by tvader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	lens;
	unsigned int	cnt;
	char			*res;

	lens = 0;
	cnt = start;
	while (*(s + lens))
		lens++;
	if (start + 1 > lens)
		return (NULL);
	if (len > lens - start)
		len = lens - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res)
	{
		while (cnt < len + start && *(s + cnt))
		{
			*(res + cnt - start) = *(s + cnt);
			cnt++;
		}
		*(res + cnt) = 0;
		return (res);
	}
	else
		return (NULL);
}
