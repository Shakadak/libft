/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 16:15:08 by npineau           #+#    #+#             */
/*   Updated: 2014/02/05 12:04:02 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl_fd(const char *s, int fd)
{
	int	ret;
	int	retn;

	ret = ft_putstr_fd(s, fd);
	if (ret == -1)
		return (-1);
	retn = ft_putchar_fd('\n', fd);
	if (retn == -1)
		return (-1);
	return (ret + retn);
}
