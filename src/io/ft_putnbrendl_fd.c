/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrendl_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 21:00:47 by npineau           #+#    #+#             */
/*   Updated: 2015/06/13 21:00:48 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrendl_fd(int const n, int fd)
{
	int	ret;
	int	retn;

	ret = ft_putnbr_fd(n, fd);
	if (ret == -1)
		return (-1);
	retn = ft_putchar_fd('\n', fd);
	if (retn == -1)
		return (-1);
	return (ret + retn);
}
