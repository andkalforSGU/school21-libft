/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:01:16 by tvader            #+#    #+#             */
/*   Updated: 2021/04/22 16:39:19 by tvader           ###   ########.fr       */
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
	if (len > lens)
		len = lens;
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
