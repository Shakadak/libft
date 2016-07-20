/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoneof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 11:52:39 by npineau           #+#    #+#             */
/*   Updated: 2016/07/20 11:52:40 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int	ft_isoneof(const char *list, const char c)
{
	while (*list)
	{
		if (*list == c)
			return (1);
		++list;
	}
	return (0);
}
