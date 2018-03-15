/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 04:37:37 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/17 06:18:14 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*tmp;

	i = 0;
	if (!s || !f || !(str = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	tmp = str;
	while (*s)
	{
		*str++ = (*f)(i++, *s++);
	}
	*str = '\0';
	return (tmp);
}
