/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mbzero.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:21:06 by npineau           #+#    #+#             */
/*   Updated: 2017/11/30 08:25:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void	*mbzero(size_t n, void *xs)
{
	uint8_t	*proxy;
	size_t	i;

	proxy = xs;
	i = 0;
	while (i < n)
	{
		proxy[i] = 0;
	}
	return (xs);
}
