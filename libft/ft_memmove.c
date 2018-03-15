/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:47:18 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/02 21:06:53 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *destination, const void *source, size_t n)
{
	char	*c1;
	char	*c2;

	c1 = (char *)destination;
	c2 = (char *)source;
	if (c1 == c2)
		return (destination);
	if (c1 < c2)
	{
		while (n-- > 0)
		{
			*c1++ = *c2++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			c1[n] = c2[n];
		}
	}
	return (destination);
}
