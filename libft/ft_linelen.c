/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 00:41:21 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/27 00:41:23 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_linelen(char *str)
{
	int i;
	int	j;
	int res;

	i = 0;
	j = ft_strlen(str);
	res = 0;
	while (str[i] == ' ')
		i++;
	while (str[j] == ' ')
		--j;
	while (i < j)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			res++;
		i++;
	}
	if (str[0] != '\0')
		res++;
	return (res);
}
