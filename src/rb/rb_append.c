/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 11:50:34 by npineau           #+#    #+#             */
/*   Updated: 2015/06/03 11:53:04 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_append(t_rb *const rb, char const c)
{
	if (rb_full(*rb))
		return (0);
	rb->tail = (rb->tail + 1) % rb->size;
	rb->buffer[rb->tail] = c;
	rb->used += 1;
	return (1);
}
