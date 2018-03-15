/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:57:12 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/02 21:08:05 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;
	unsigned char	duks;

	cur = (unsigned char *)s;
	duks = (unsigned char)c;
	while (n--)
	{
		if (*cur == duks)
			return (cur);
		cur++;
	}
	return (NULL);
}
