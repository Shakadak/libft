/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_iter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:04:58 by npineau           #+#    #+#             */
/*   Updated: 2017/11/24 09:09:14 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

void	rb_iter(t_rb rb, void (*f)(void *))
{
	size_t	i;

	i = 0;
	while (i < rb.used)
	{
		f(rb.head);
		rb.head = (rb.head == rb.b_end ? rb.b_start : rb.head + rb.esize);
		i += 1;
	}
}
