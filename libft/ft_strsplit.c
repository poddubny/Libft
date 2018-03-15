/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:28:44 by mpoddubn          #+#    #+#             */
/*   Updated: 2017/11/27 17:14:50 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	ft_splen(char *str, char c)
{
	int			i;
	int			j;
	int			splen;

	i = 0;
	splen = 0;
	j = ft_strlen(str);
	while (str[i] == c)
		i++;
	while (str[j] == c)
		--j;
	while (i < j)
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			splen++;
		i++;
	}
	if (str[0] != '\0')
		splen++;
	return (splen);
}

static	int		ft_miss(char *str, char c, int i)
{
	int			n;

	n = 0;
	while (str[i] != c && str[i])
	{
		n++;
		i++;
	}
	return (n);
}

static	char	*ft_insert(char *str, char c, int *i)
{
	int			j;
	char		*mal;

	j = 0;
	if (!(mal = (char *)malloc(ft_miss(str, c, *i) + 1)))
		return (NULL);
	while (str[*i] != c && str[*i])
	{
		mal[j] = str[*i];
		j++;
		*i += 1;
	}
	mal[j] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (mal);
}

char			**ft_strsplit(const char *str, char c)
{
	int			i;
	int			n;
	int			splen;
	char		**tmp;

	i = 0;
	n = 0;
	if (!str)
		return (NULL);
	splen = ft_splen((char *)str, c);
	if (!(tmp = (char **)malloc(sizeof(char *) * (splen + 1))))
		return (NULL);
	while (str[i] == c)
		i++;
	while (n < splen && str[i])
		tmp[n++] = ft_insert((char *)str, c, &i);
	tmp[n] = NULL;
	return (tmp);
}
