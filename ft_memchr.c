/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvader <tvader@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:21:53 by tvader            #+#    #+#             */
/*   Updated: 2021/04/23 15:02:39 by tvader           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (*(unsigned char *)(s + i) != (unsigned char)c && *(char *)(s + i))
	{
		i++;
		if (i == n)
			break ;
	}
	if (i == n)
		return (NULL);
	else
		return ((void *)(s + i));
}
