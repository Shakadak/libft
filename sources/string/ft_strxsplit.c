/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 14:35:52 by npineau           #+#    #+#             */
/*   Updated: 2015/01/20 14:35:55 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_todo(const char *s, int (*is_x)(char))
{
	int	i;
	int	cp;

	i = 0;
	cp = 0;
	while (s[i] != 0)
	{
		if (!is_x(s[i]))
		{
			cp++;
			while (!is_x(s[i]) && s[i] != 0)
				i++;
		}
		if (s[i] != 0)
			i++;
	}
	return (cp);
}

static int	ft_modlen(const char *s, int (*is_x)(char))
{
	int	i;

	i = 0;
	while (!is_x(s[i]) && s[i] != 0)
		i++;
	return (i);
}

char		**ft_strxsplit(char const *s, int (*is_x)(char))
{
	int		i;
	int		j;
	char	**tab;

	tab = NULL;
	i = 0;
	j = 0;
	if (s == NULL)
		return (tab);
	tab = (char **)malloc(sizeof(char *) * (ft_todo(s, is_x) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		if (!is_x(s[i]))
		{
			tab[j] = ft_strsub(s, i, ft_modlen(&s[i], is_x));
			j++;
			i += ft_modlen(&s[i], is_x) - 1;
		}
		i++;
	}
	tab[ft_todo(s, is_x)] = NULL;
	return (tab);
}
