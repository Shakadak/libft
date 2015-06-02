/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:39:35 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:20:30 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RB_H
# define RB_H

typedef struct	s_rb
{
	char		*buffer;
	size_t		size;
	size_t		used;
	size_t		head;
	size_t		tail;
}				t_rb;

size_t			rb_consume(t_rb *const src, char *dest, size_t n);
size_t			rb_cpystr(t_rb *const src, char *dest, size_t n);
t_rb			rb_dup(t_rb const src);
int				rb_empty(t_rb const buff);
void			*rb_flatten(t_rb *const src);
void			rb_free(t_rb *const rb);
int				rb_full(t_rb const buff);
t_rb			rb_new(size_t const length);
char			rb_next(t_rb *const rb);
char			rb_peek(t_rb const rb);
size_t			rb_produce(char *const src, t_rb *dest, size_t const n);
ssize_t			rb_u_read(int fildes, t_rb *const rb, size_t nbyte);
ssize_t			rb_u_recv(int socket, t_rb *const rb, size_t nbyte, int flags);
ssize_t			rb_u_send(int socket, t_rb *const rb, size_t nbyte, int flags);
ssize_t			rb_u_write(int fildes, t_rb *const rb, size_t nbyte);

#endif
