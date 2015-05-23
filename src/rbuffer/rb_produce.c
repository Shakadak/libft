/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_produce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:41:55 by npineau           #+#    #+#             */
/*   Updated: 2015/05/23 09:41:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	rb_produce(void *const src, t_rb *dest, size_t const n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t			max;
	size_t			i;

	i = 0;
	src2 = src;
	dest2 = dest->buffer;
	max = dest->size - dest->used;
	if (n < max)
		max = n;
	while (i < max)
	{
		dest2[(dest->tail + 1 + i) % dest->size] = src2[i];
		++i;
	}
	dest->tail += max;
	return (max);
}
