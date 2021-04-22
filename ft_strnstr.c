/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:43:11 by tvader            #+#    #+#             */
/*   Updated: 2021/04/22 14:01:16 by tvader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	found;
	size_t	checked;

	found = 0;
	checked = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (*(haystack + checked) && *(needle + found) && len > 0)
	{
		if (*(haystack + checked) == *(needle + found))
			found++;
		else
			found = 0;
		checked++;
		len--;
	}
	if (*(needle + found))
		return (NULL);
	else
		return ((char *)(haystack + checked - found));
}
