/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:39:23 by npineau           #+#    #+#             */
/*   Updated: 2016/05/11 13:39:36 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSC_H
# define MSC_H

typedef struct	s_pair
{
	void	*first;
	void	*second;
}				t_pair;

void			*fst(t_pair pair);
void			*snd(t_pair pair);
t_pair			pair(void *first, void *second);

int				imin(int l, int r);
int				imax(int l, int r);

#endif
