/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 04:24:45 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/17 17:16:14 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*tmp;

	tmp = 0;
	if (!s || !f || !(str = (char *)malloc(ft_strlen((char *)s) + 1)))
		return (0);
	tmp = str;
	while (*s != '\0')
	{
		*str++ = (*f)(*s++);
	}
	*str = '\0';
	return (tmp);
}
