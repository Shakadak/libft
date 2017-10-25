/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:39:35 by npineau           #+#    #+#             */
/*   Updated: 2017/10/25 11:53:29 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RB_H
# define RB_H

# include <unistd.h>
# include <stdint.h>

typedef struct	s_rb
{
	uint8_t		*b_start;
	uint8_t		*b_end;
	size_t		capacity;
	size_t		esize;
	size_t		used;
	uint8_t		*head;
	uint8_t		*tail;
}				t_rb;

void			*rb_back(t_rb const rb);
int				rb_dequeue(t_rb *rb, void **item);
size_t			rb_drop_back_n(void (*del)(void*), t_rb *rb, size_t n);
size_t			rb_drop_front_n(void (*del)(void*), t_rb *rb, size_t n);
int				rb_drop_n(t_rb *rb, void (*del)(void*), size_t n);
int				rb_dup(t_rb const src, t_rb *slot);
int				rb_empty(t_rb const buff);
int				rb_enqueue(t_rb *rb, void const *src);
int				rb_force_enqueue(t_rb *rb, void (*del)(void*), void const *src);
void			rb_free(t_rb *rb);
void			*rb_front(t_rb const rb);
int				rb_full(t_rb const rb);
void			*rb_index(t_rb const rb, size_t const i);
int				rb_new(size_t const capacity, size_t esize, t_rb *slot);
int				rb_peek(t_rb const rb, void **item);
int				rb_pop_back(t_rb *rb, void *item);
int				rb_pop_front(t_rb *rb, void *item);
int				rb_push_back(t_rb *rb, void const *src);
int				rb_push_front(t_rb *rb, void const *src);
t_rb			*rb_resize(t_rb *rb, size_t capacity);

#endif
