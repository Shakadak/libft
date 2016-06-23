/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_when.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 11:59:32 by npineau           #+#    #+#             */
/*   Updated: 2016/05/12 11:59:35 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/lst.h"
#include "inc/str.h"

t_lst	*split_when(int (*p)(char), const char *str)
{
	t_pair	t1;
	t_pair	t2;
	t_lst	*h;

	if (!str)
		return (NULL);
	t1 = strspan(p, str);
	free(fst(t1));
	if (snd(t1) == NULL)
		return (NULL);
	t2 = strbreak(p, snd(t1));
	h = ft_lstnew(fst(t2), ft_strlen(fst(t2)));
	free(snd(t1));
	free(fst(t2));
	h->next = split_when(p, snd(t2));
	free(snd(t2));
	return (h);
}
