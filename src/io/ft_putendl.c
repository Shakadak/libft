/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 11:40:15 by npineau           #+#    #+#             */
/*   Updated: 2015/05/08 14:55:00 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl(const char *str)
{
	int	ret;
	int	retn;

	ret = ft_putstr(str);
	if (ret == -1)
		return (-1);
	retn = ft_putchar('\n');
	if (retn == -1)
		return (-1);
	return (ret + retn);
}
