/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 21:57:44 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/16 17:42:45 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (*s2 == '\0')
		return ((char *)s1);
	i = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= i)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, i) == 0)
		{
			return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
