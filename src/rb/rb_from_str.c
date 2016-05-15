/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_from_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 11:26:58 by npineau           #+#    #+#             */
/*   Updated: 2015/06/03 11:26:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_rb	rb_from_str(char const *const str)
{
	size_t	len;

	len = ft_strlen(str);
	return ((t_rb){ft_strdup(str), len, len, 0, len - 1});
}
