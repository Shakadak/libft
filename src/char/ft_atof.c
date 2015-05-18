#include "libft.h"

static void	exponent(char **s, int *e, int *c)
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

double		ft_atof(char *s)
{
	double	a;
	int		e;
	int		c;

	a = 0.0;
	e = 0;
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
	return (a);
}