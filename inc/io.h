/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:29:34 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 11:07:46 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include <unistd.h>
# include "inc/str.h"

int		ft_putchar(char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr(char const *s);
int		ft_putstr_fd(const char *s, int fd);
int		ft_putendl(const char *s);
int		ft_putendl_fd(const char *s, int fd);
int		ft_putnbr(int n);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbrendl(int const n);
int		ft_putnbrendl_fd(int const n, int fd);

# define GNL_BUFF_SIZE 4096

ssize_t	get_next_line(int fd, t_str *line);

#endif
