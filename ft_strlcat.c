/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:39:39 by tvader            #+#    #+#             */
/*   Updated: 2021/04/21 19:10:33 by tvader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cnt;
	size_t	dlen;
	size_t	slen;

	cnt = 0;
	slen = 0;
	dlen = 0;
	while (*(dst + dlen))
		dlen++;
	while (*(src + slen))
		slen++;
	if (dstsize < 2)
		return (slen + dstsize);
	while (cnt + 1 < dstsize - dlen && *(src + cnt))
	{
		*(dst + cnt + dlen) = *(src + cnt);
		cnt++;
	}
	*(dst + cnt + dlen) = 0;
	if (dlen < dstsize)
		return (dlen + slen);
	else
		return (dstsize + slen);
}
