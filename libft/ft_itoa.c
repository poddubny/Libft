/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:45:27 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/16 15:45:29 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_itoa(int n)
{
	int					i;
	int					len;
	char				*str;
	unsigned long long	tmp;

	i = 0;
	len = 2;
	tmp = n;
	if (n < 0 && len++)
		tmp = -tmp;
	while (tmp /= 10)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	tmp = n;
	if (n < 0 && (tmp = -tmp) && ++i)
		str[0] = '-';
	while (len-- != i)
	{
		str[len] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (str);
}
