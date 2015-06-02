/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:40:33 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:03:23 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_rb	rb_dup(t_rb const src)
{
	t_rb	copy;

	copy.buffer = ft_memdup(src.buffer, src.size * sizeof(copy.buffer));
	if (copy.buffer == NULL)
	{
		copy.size = 0;
		copy.used = 0;
		copy.head = 0;
		copy.tail = 0;
	}
	else
	{
		copy.size = src.size;
		copy.used = src.used;
		copy.head = src.head;
		copy.tail = src.tail;
	}
	return (copy);
}
