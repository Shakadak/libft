/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 16:16:06 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 14:38:45 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/io.h"
#include "inc/rb.h"

static int	is_newline(void *c)
{
	return (*(char *)c == '\n');
}

ssize_t	get_next_line(int fd, t_str *line)
{
	static t_rb	storage = { .b_start = NULL };
	char		buffer[GNL_BUFF_SIZE];
	ssize_t		i;
	ssize_t		check;

	if (storage.b_start == NULL)
		rb_new(GNL_BUFF_SIZE, sizeof(char), &storage);
	i = rb_find_index(storage, is_newline);
	if (i == -1)
	{
		check = read(fd, buffer, GNL_BUFF_SIZE);
		if (check <= 0) {
			return (check); }
		rb_grow_push_back_n(&storage, buffer, check);
		return (get_next_line(fd, line));
	}
	else
	{
		*line = malloc(sizeof(char) * (i + 1));
		rb_pop_front_n(&storage, *line, i + 1);
		*line[i] = '\0';
		ft_putendl(*line);
		return (1);
	}
}
