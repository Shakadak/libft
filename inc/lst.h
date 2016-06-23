/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:29:47 by npineau           #+#    #+#             */
/*   Updated: 2016/05/14 15:04:02 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

# include <stddef.h>
# include "arr.h"

typedef struct s_arr	t_arr;

typedef struct		s_lst
{
	void			*content;
	size_t			content_size;
	struct s_lst	*next;
}					t_lst;

t_arr				*ft_lst2arr(const t_lst *lst);
void				ft_lstadd(t_lst **alst, t_lst *new);
void				ft_lstapp(t_lst *lst, t_lst *node);
void				ft_lstdelone(t_lst **alst, void (*del)());
void				ft_lstdel(t_lst **alst, void (*del)());
t_lst				*ft_lstind(t_lst *lst, size_t index);
void				ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));
size_t				ft_lstlen(const t_lst *lst);
t_lst				*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
t_lst				*ft_lstnew(const void *content, size_t content_size);

#endif
