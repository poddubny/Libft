/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 04:39:07 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/01 04:39:09 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)dst;
	c2 = (unsigned char *)src;
	while (i < n)
	{
		c1[i] = c2[i];
		if (c2[i] == (unsigned char)c)
			return (c1 + i + 1);
		i++;
	}
	return (NULL);
}
