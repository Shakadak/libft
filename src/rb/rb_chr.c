/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_chr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 11:32:25 by npineau           #+#    #+#             */
/*   Updated: 2015/06/03 11:32:26 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_chr(t_rb rb, int const c)
{
	int	before;

	before = rb.size;
	while (rb_peek(rb) != c)
		rb_next(&rb);
	if (rb_empty(rb))
		return (-1);
	return (before - rb.size);
}
