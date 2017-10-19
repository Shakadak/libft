/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 12:00:06 by npineau           #+#    #+#             */
/*   Updated: 2017/10/19 10:51:15 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msc.h"

t_pair	pair(void *f, void *s)
{
	return ((t_pair){f, s});
}

void	*fst(t_pair p)
{
	return (p.fst);
}

void	*snd(t_pair p)
{
	return (p.snd);
}
