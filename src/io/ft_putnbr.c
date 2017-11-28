/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 16:05:37 by npineau           #+#    #+#             */
/*   Updated: 2017/11/28 13:25:26 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "inc/io.h"

static int	rec_putnbr_fd(int n, int const fd)
{
	int ret;
	int reti;

	ret = 0;
	if (n < 0)
	{
		ret = write(fd, "-", 1);
		if (ret == -1)
			return (-1);
		n *= -1;
	}
	if (n >= 10)
	{
		reti = rec_putnbr_fd(n / 10, fd);
		if (reti == -1)
			return (-1);
		ret += reti;
		reti = rec_putnbr_fd(n % 10, fd);
		if (reti == -1)
			return (-1);
		return (ret + reti);
	}
	else
		return (ft_putchar_fd(n + '0', fd));
}

int			ft_putnbr_fd(int n, int const fd)
{
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	else
		return (rec_putnbr_fd(n, fd));
}

int			ft_putnbr(int n)
{
	return (ft_putnbr_fd(n, 1));
}

int			ft_putnbrendl_fd(int const n, int fd)
{
	int	ret;
	int	retn;

	ret = ft_putnbr_fd(n, fd);
	if (ret == -1)
		return (-1);
	retn = write(fd, "\n", 1);
	if (retn == -1)
		return (-1);
	return (ret + retn);
}

int			ft_putnbrendl(int const n)
{
	return (ft_putnbrendl_fd(n, STDIN_FILENO));
}
