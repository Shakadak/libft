/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 12:25:13 by npineau           #+#    #+#             */
/*   Updated: 2017/10/19 10:50:45 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSC_H
# define MSC_H

typedef struct	s_pair
{
	void	*fst;
	void	*snd;
}				t_pair;

void			*fst(t_pair pair);
void			*snd(t_pair pair);
t_pair			pair(void *first, void *second);

int				imin(int l, int r);
int				imax(int l, int r);

#endif
