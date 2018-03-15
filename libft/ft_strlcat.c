/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:45:02 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/09 18:45:04 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	c;
	size_t	i;
	size_t	d;
	size_t	res;

	c = ft_strlen(dst);
	i = ft_strlen(src);
	if (c < n)
		res = i + c;
	else
		res = n + i;
	i = 0;
	if (n > c)
	{
		d = (n - c);
		while (--d)
		{
			dst[c++] = src[i++];
		}
		dst[c] = '\0';
	}
	return (res);
}
