/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:55:16 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/10 19:55:17 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *dst)
{
	int i;
	int c;

	i = 0;
	c = 0;
	if (dst[0] == '\0')
		return (char*)(str);
	while (str[i] != '\0')
	{
		c = 0;
		while (dst[c] == str[i + c])
		{
			if (dst[c + 1] == '\0')
			{
				return ((char *)str + i);
			}
			c++;
		}
		i++;
	}
	return (0);
}
