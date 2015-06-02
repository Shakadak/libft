/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_cpymem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:40:27 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:09:51 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	rb_cpystr(t_rb *const src, char *dest, size_t n)
{
	size_t			max;
	size_t			i;

	i = 0;
	max = src->used;
	if (n < max)
		max = n;
	while (i < max)
	{
		dest[i] = src->buffer[(src->head + i) % src->size];
		++i;
	}
	dest[i] = 0;
	return (max);
}
