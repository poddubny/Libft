/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 20:55:21 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/10/30 14:24:23 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp;

	tmp = (unsigned char *)b;
	while (len)
	{
		*tmp = (unsigned char)c;
		if (len)
		{
			tmp++;
		}
		len--;
	}
	return (b);
}
