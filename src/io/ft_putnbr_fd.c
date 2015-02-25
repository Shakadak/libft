/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 16:22:02 by npineau           #+#    #+#             */
/*   Updated: 2014/02/05 12:04:17 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

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
