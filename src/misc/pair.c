/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 12:00:06 by npineau           #+#    #+#             */
/*   Updated: 2016/05/12 12:00:09 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msc.h"

t_pair	pair(void *f, void *s)
{
	return ((t_pair){f, s});
}

void	*fst(t_pair p)
{
	return (p.first);
}

void	*snd(t_pair p)
{
	return (p.second);
}
