/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_consume.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:40:23 by npineau           #+#    #+#             */
/*   Updated: 2015/06/14 12:10:38 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	rb_consume(t_rb *const src, char *dest, size_t n)
{
	size_t			i;
	char			c;

	i = 0;
	while (i < n && (c = rb_peek(*src)) != 0)
		dest[i++] = rb_next(src);
	return (i);
}
