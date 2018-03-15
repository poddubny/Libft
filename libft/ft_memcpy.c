/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:22:18 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/16 19:40:34 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *destination, const void *source, size_t n)
{
	char	*c1;
	char	*c2;

	if (n == 0)
		return (destination);
	c1 = (char *)destination;
	c2 = (char *)source;
	while (n--)
	{
		c1[n] = c2[n];
	}
	return (destination);
}
