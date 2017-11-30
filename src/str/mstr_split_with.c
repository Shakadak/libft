/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstr_split_with.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 08:36:17 by npineau           #+#    #+#             */
/*   Updated: 2017/11/30 10:37:19 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/str.h"
#include "inc/rb.h"

static t_rb		m_str_split_with_go(t_rb xss, int (*is_sep)(char), t_str str)
{
	t_pair	seps;
	t_pair	non_seps;

	seps = strspan(is_sep, str);
	free(seps.fst);
	non_seps = strbreak(is_sep, seps.snd);
	free(seps.snd);
	if (!ft_strempty(non_seps.fst))
	{
		rb_push_back(&xss, &non_seps.fst);
	}
	else
	{
		free(non_seps.fst);
		free(non_seps.snd);
		return xss;
	}
	return m_str_split_with_go(xss, is_sep, non_seps.snd);
}

t_rb			mstr_split_with(int (*is_sep)(char), t_str str)
{
	return (m_str_split_with_go(rb_new(16, sizeof(t_str), NULL), is_sep, str));
}
