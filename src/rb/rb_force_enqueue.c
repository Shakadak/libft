/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_force_enqueue.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 11:27:18 by npineau           #+#    #+#             */
/*   Updated: 2016/06/10 11:27:21 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_force_enqueue(t_rb *rb, void (*del)(void*), void const *src)
{
	if (rb_full(*rb))
	{
		rb_drop_n(rb, del, 1);
	}
	return (rb_enqueue(rb, src));
}
