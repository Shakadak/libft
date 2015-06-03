/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:29:34 by npineau           #+#    #+#             */
/*   Updated: 2015/06/03 14:23:18 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

int	ft_putchar(char c);
int	ft_putstr(char const *s);
int	ft_putendl(const char *s);
int	ft_putnbr(int n);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(const char *s, int fd);
int	ft_putendl_fd(const char *s, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putnbrendl_fd(int const n, int fd);

#endif
