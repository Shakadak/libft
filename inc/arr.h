/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 14:56:27 by npineau           #+#    #+#             */
/*   Updated: 2016/05/14 14:56:29 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_H
# define ARR_H

# include <stddef.h>
# include "list.h"

typedef struct s_list	t_list;

typedef struct		s_arr
{
	void			*content;
	size_t			size;
	char			cell;
}					t_arr;

t_list				*ft_arr2lst(const t_arr *arr);
size_t				ft_arrcapacity(const t_arr *arr);
size_t				ft_arrused(const t_arr *arr);
t_arr				*ft_arrnew(size_t l);

#endif
