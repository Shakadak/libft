/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:39:35 by npineau           #+#    #+#             */
/*   Updated: 2015/06/14 11:15:08 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RB_H
# define RB_H

#include <unistd.h>

typedef struct	s_rb
{
	void		*buffer;
	size_t		capacity;
	size_t		esize;
	size_t		used;
	void		*head;
	void		*tail;
}				t_rb;

int				rb_push_back(t_rb *rb, void const *src);
int				rb_pop_front(t_rb *rb, void **item);
int				rb_dup(t_rb const src, t_rb *slot);
int				rb_empty(t_rb const buff);
void			rb_free(t_rb *rb);
int				rb_full(t_rb const rb);
int				rb_new(size_t const capacity, size_t esize, t_rb *slot);
int				rb_peek(t_rb const rb, void **item);
int				rb_drop_n(t_rb const *rb, size_t n);

#endif
