/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:29:59 by npineau           #+#    #+#             */
/*   Updated: 2017/11/27 14:31:58 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <stddef.h>
# include "msc.h"
# include "lst.h"

typedef char*		t_string;

int					ft_isx(char *str, int (*is)(int));
size_t				ft_array_len(char const *const *const array);
char				*ft_strchr(const char *src, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strcpy(char *copy, const char *src);
int					ft_strempty(char const *const src);
char				*ft_strncpy(char *copy, const char *src, size_t n);
char				*ft_strstr(const char *dest, const char *mod);
char				*ft_strnstr(const char *dest, const char *mod, size_t n);
char				*ft_strrchr(const char *src, int c);
char				*ft_strdup(const char *src);
size_t				ft_strlcat(char *dest, const char *src, size_t buf);
size_t				ft_strlen(const char *str);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strnew(size_t size);
void				ft_strdel(char **ap);
void				ft_strclr(char *src);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *src, unsigned int start, size_t n);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *src);
char				**ft_strsplit(char const *s, char c);
char				**ft_strxsplit(char const *s, int (*is_x)(char));
int					get_next_line(int fd, char **src);

char				*ft_strndup(size_t n, const char *src);
size_t				ft_strnlen(size_t n, const char *str);
t_pair				strspan(int (*p)(char), const char *str);
t_pair				strbreak(int (*p)(char), const char *str);
t_lst				*split_when(int (*p)(char), const char *str);

char				*mstpcpy(char *out, const char *in);
char				*mstr_join_with(char *glue, char **strs, size_t qty,
		size_t *len_out);

#endif
