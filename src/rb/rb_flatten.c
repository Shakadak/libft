/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_flatten.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 11:28:35 by npineau           #+#    #+#             */
/*   Updated: 2015/06/03 13:08:40 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*rb_flatten(t_rb const src)
{
	char	*dest;

	dest = ft_strnew(src.used);
	rb_cpystr(src, dest, src.used);
	return (dest);
}
