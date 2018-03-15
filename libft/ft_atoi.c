/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 23:31:02 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/10 23:31:03 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_atoi(char *str)
{
	int					i;
	int					neg;
	unsigned long long	nb;

	i = 0;
	neg = 0;
	nb = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		nb = (nb * 10) + ((int)str[i++] - 48);
	}
	if (nb > 9223372036854775807 && neg != 1)
		return (-1);
	if (nb > 9223372036854775807 && neg == 1)
		return (0);
	if (neg)
		return (-nb);
	return (nb);
}
