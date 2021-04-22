/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:14:20 by tvader            #+#    #+#             */
/*   Updated: 2021/04/22 15:08:04 by tvader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		cnt;
	int		len1;
	int		len2;

	cnt = 0;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (res)
	{
		while (cnt < len1)
		{
			*(res + cnt) = *(s1 + cnt);
			cnt++;
		}
		while (cnt <= (len1 + len2))
		{
			*(res + cnt) = *(s2 + cnt - len1);
			cnt++;
		}
		return ((char *)res);
	}
	else
		return (NULL);
}
