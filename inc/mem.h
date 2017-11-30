/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:29:52 by npineau           #+#    #+#             */
/*   Updated: 2017/11/30 08:29:17 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include <stddef.h>
# include <stdint.h>

void	ft_freesplit(void **array);
void	ft_bzero(void *src, size_t length);
void	*ft_memchr(void const *ptr, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
void	*ft_memcpy(void *dst, void const *src, size_t n);
void	*ft_memccpy(void *dst, void const *src, int c, size_t n);
void	*ft_memmove(void *dest, void const *src, size_t n);
void	*ft_memset(void *dest, int c, size_t length);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_memdup(void const *src, size_t const size);

void	*mbzero(size_t n, void *xs);

#endif
