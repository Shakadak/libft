/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:43:10 by npineau           #+#    #+#             */
/*   Updated: 2015/05/23 09:43:11 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	exponent(char const **s, int *e, int *c)
{
	int	sign;
	int	i;

	if (*c == 'e' || *c == 'E')
	{
		sign = 1;
		i = 0;
		*c = *(*s)++;
		if (*c == '+')
			*c = *(*s)++;
		else if (*c == '-')
		{
			*c = *(*s)++;
			sign = -1;
		}
		while (ft_isdigit(*c))
		{
			i = i * 10 + (*c - '0');
			*c = *(*s)++;
		}
		*e += i * sign;
	}
}

static void	exponent_to_d(double *a, int *e)
{
	while (*e > 0)
	{
		*a *= 10.0;
		(*e)--;
	}
	while (*e < 0)
	{
		*a *= 0.1;
		(*e)++;
	}
}

double		ft_atof(char const *s)
{
	double	a;
	int		e;
	int		c;
	int		p;

	a = 0.0;
	e = 0;
	p = 1;
	if (*s == '-')
	{
		(p = -1);
		++s;
	}
	while ((c = *s++) != '\0' && ft_isdigit(c))
		a = a * 10.0 + (c - '0');
	if (c == '.')
		while ((c = *s++) != '\0' && ft_isdigit(c))
		{
			a = a * 10.0 + (c - '0');
			e = e - 1;
		}
	exponent(&s, &e, &c);
	exponent_to_d(&a, &e);
	return (p * a);
}
