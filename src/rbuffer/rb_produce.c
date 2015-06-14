/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_produce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:41:55 by npineau           #+#    #+#             */
/*   Updated: 2015/06/14 11:56:57 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	rb_produce(char *const src, t_rb *dest, size_t const n)
{
	size_t			i;

	i = 0;
	while (i < n && rb_append(dest, src[i]))
		++i;
	return (i);
}
