/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoddubn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 02:00:21 by mpoddubn          #+#    #+#             */
/*   Updated: 2018/02/27 22:38:08 by mpoddubn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list		*search_list(t_list **tmp, int fd)
{
	t_list			*buf;
	t_list			*head;

	head = *tmp;
	if (!tmp)
	{
		*tmp = ft_lstnew("\0", fd);
		(*tmp)->content_size = fd;
		return (*tmp);
	}
	while (head)
	{
		if ((int)((head)->content_size) == fd)
			return (head);
		head = head->next;
	}
	buf = ft_lstnew("\0", fd);
	buf->content_size = fd;
	ft_lstadd(tmp, buf);
	return (*tmp);
}

static char			*return_line(char *str, char **line)
{
	int				i;
	int				d;

	i = -1;
	d = 1;
	while (str[++i] != '\n')
		if (str[i] == '\0' && ((d = 0) || 1))
			break ;
	*line = ft_strsub(str, 0, i);
	return (ft_strdup(&str[i + d]));
}

int					get_next_line(const int fd, char **line)
{
	int				amount;
	char			str[BUFF_SIZE + 1];
	static t_list	*new = NULL;
	t_list			*tmp;
	char			*buf;

	if (fd < 0 || !line || read(fd, str, 0) < 0)
		return (-1);
	tmp = search_list(&new, fd);
	while ((amount = read(fd, str, BUFF_SIZE)) > 0 || \
		!(ft_strchr(tmp->content, '\n')))
	{
		str[amount] = '\0';
		buf = tmp->content;
		tmp->content = ft_strjoin(buf, str);
		free(buf);
		if (ft_strchr(tmp->content, '\n') || !amount)
			break ;
	}
	if (!ft_strlen(tmp->content) && ((*line = NULL) || 1))
		return (0);
	buf = tmp->content;
	tmp->content = return_line(buf, line);
	free(buf);
	return (1);
}
