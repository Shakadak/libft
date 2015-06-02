/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_produce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:41:55 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:10:41 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	rb_produce(char *const src, t_rb *dest, size_t const n)
{
	size_t			max;
	size_t			i;

	i = 0;
	max = dest->size - dest->used;
	if (n < max)
		max = n;
	while (i < max)
	{
		dest->buffer[(dest->tail + 1 + i) % dest->size] = src[i];
		++i;
	}
	dest->tail += max;
	return (max);
}
