/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_next.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 17:24:42 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:25:32 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	rb_next(t_rb *const rb)
{
	char	c;

	if (rb_empty(*rb))
		return (0);
	c = rb_peek(*rb);
	rb->head = (rb->head + 1) % rb->size;
	++rb->used;
	return (c);
}
