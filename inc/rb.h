/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:39:35 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 09:16:20 by npineau          ###   ########.fr       */
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

typedef void	(*t_rb_cpy)(void const *in, void *out, size_t size);

void			*rb_back(t_rb rb);
int				rb_dequeue(t_rb *rb, void **item);
size_t			rb_drop_back_n(void (*del)(void*), t_rb *rb, size_t n);
size_t			rb_drop_front_n(void (*del)(void*), t_rb *rb, size_t n);
int				rb_drop_n(t_rb *rb, void (*del)(void*), size_t n);
int				rb_dup(t_rb src, t_rb *slot);
int				rb_empty(t_rb buff);
int				rb_enqueue(t_rb *rb, void const *src);
int				rb_force_enqueue(t_rb *rb, void (*del)(void*), void const *src);
void			rb_free(t_rb *rb);
void			*rb_front(t_rb rb);
int				rb_full(t_rb rb);

size_t			rb_grow_push_back(t_rb *rb, void const *x);
size_t			rb_grow_push_back_n(t_rb *rb, void const **xs, size_t n);
size_t			rb_grow_push_back_n_with
				(t_rb_cpy cpy, t_rb *rb, void const **xs, size_t n);
size_t			rb_grow_push_back_with
				(t_rb_cpy cpy, t_rb *rb, void const *x);

size_t			rb_grow_push_front(t_rb *rb, void const *x);
size_t			rb_grow_push_front_n(t_rb *rb, void const **xs, size_t n);
size_t			rb_grow_push_front_n_with
				(t_rb_cpy cpy, t_rb *rb, void const **xs, size_t n);
size_t			rb_grow_push_front_with
				(t_rb_cpy cpy, t_rb *rb, void const *x);

void			*rb_index(t_rb rb, size_t i);
void			rb_iter(t_rb rb, void (*f)(void *));
t_rb			*rb_map(t_rb rb, size_t nsize, void (*f)(void *in, void *out),
		t_rb *out);
int				rb_new(size_t capacity, size_t esize, t_rb *slot);
int				rb_peek(t_rb rb, void **item);

size_t			rb_pop_back(t_rb *rb, void *item);
size_t			rb_pop_back_n(t_rb *rb, void **xs, size_t n);
size_t			rb_pop_back_n_with
				(t_rb_cpy cpy, t_rb *rb, void **xs, size_t n);
size_t			rb_pop_back_with
				(t_rb_cpy cpy, t_rb *rb, void *x);

size_t			rb_pop_front(t_rb *rb, void *item);
size_t			rb_pop_front_n(t_rb *rb, void **xs, size_t n);
size_t			rb_pop_front_n_with
				(t_rb_cpy cpy, t_rb *rb, void **xs, size_t n);
size_t			rb_pop_front_with
				(t_rb_cpy cpy, t_rb *rb, void *x);

size_t			rb_push_back(t_rb *rb, void const *x);
size_t			rb_push_back_n(t_rb *rb, void const **xs, size_t n);
size_t			rb_push_back_n_with
				(t_rb_cpy cpy, t_rb *rb, void const **xs, size_t n);
size_t			rb_push_back_with
				(t_rb_cpy cpy, t_rb *rb, void const *x);

size_t			rb_push_front(t_rb *rb, void const *x);
size_t			rb_push_front_n(t_rb *rb, void const **xs, size_t n);
size_t			rb_push_front_n_with
				(t_rb_cpy cpy, t_rb *rb, void const **xs, size_t n);
size_t			rb_push_front_with
				(t_rb_cpy cpy, t_rb *rb, void const *x);

t_rb			*rb_resize(t_rb *rb, size_t capacity);

#endif
