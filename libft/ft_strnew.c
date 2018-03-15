/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:26:10 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/16 17:42:03 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tmp;

	tmp = (char *)malloc(size + 1);
	if (tmp == NULL)
		return (NULL);
	ft_memset(tmp, '\0', size + 1);
	return (tmp);
}
