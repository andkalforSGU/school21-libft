/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:21:53 by tvader            #+#    #+#             */
/*   Updated: 2021/04/21 19:09:43 by tvader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	cnt;

	cnt = 0;
	while (*(unsigned char *)(s + cnt) != (unsigned char)c && cnt < n)
		cnt++;
	if (cnt == n)
		return (NULL);
	else
		return ((void *)(s + cnt));
}
