/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spanbreak.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 11:59:27 by npineau           #+#    #+#             */
/*   Updated: 2016/05/12 11:59:35 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msc.h"
#include "str.h"

t_pair	strspan(int (*p)(char), const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && p(str[i]))
	{
		i = i + 1;
	}
	return (pair(ft_strndup(i, str), ft_strdup(str + i)));
}

t_pair	strbreak(int (*p)(char), const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && !p(str[i]))
	{
		i = i + 1;
	}
	return (pair(ft_strndup(i, str), ft_strdup(str + i)));
}
