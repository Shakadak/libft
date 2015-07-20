/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_take_while_not.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 11:12:35 by npineau           #+#    #+#             */
/*   Updated: 2015/06/14 11:12:36 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_rb	rb_take_while_not(int (*p)(char), t_rb xs)
{
	t_rb	res;
	char	x;

	res = rb_new(xs.size);
	x = rb_next(&xs);
	while (x && !p(x))
	{
		rb_append(&res, x);
		x = rb_next(&xs);
	}
	return (res);
}
