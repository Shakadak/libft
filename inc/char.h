/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:29:26 by npineau           #+#    #+#             */
/*   Updated: 2017/10/18 15:23:38 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H

double				ft_atof(char const *s);
int					ft_atoi(char const *src);
char				*ft_itoa(int n);
int					ft_isalnum(char c);
int					ft_isascii(char c);
int					ft_isalpha(char c);
int					ft_isdigit(char c);
int					ft_isoneof(const char *list, const char c);
int					ft_isprint(char c);
int					ft_isspace(char c);
char				ft_tolower(char c);
char				ft_toupper(char c);

#endif
