/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 03:05:10 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/14 03:05:11 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_adele(char *s, int i, int c)
{
	char		*tmp;
	char		*baf;

	if (!(tmp = (char *)malloc(++c - i + 1)))
		return (0);
	baf = tmp;
	while (i < c)
		*tmp++ = s[i++];
	*tmp = '\0';
	return (baf);
}

char			*ft_strtrim(char	const *s)
{
	int			i;
	int			c;
	char		*tmp;

	i = 0;
	if (!s)
		return (0);
	c = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[c] == ' ' || s[c] == '\n' || s[c] == '\t')
		c--;
	if (i > c)
	{
		tmp = (char *)malloc(1);
		*tmp = '\0';
		return (tmp);
	}
	tmp = ft_adele((char *)s, i, c);
	return (tmp);
}
