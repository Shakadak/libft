/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 11:57:43 by npineau           #+#    #+#             */
/*   Updated: 2016/05/12 11:57:50 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/lst.h"

void	ft_lstapp(t_lst *lst, t_lst *node)
{
	if (lst)
	{
		if (!lst->next)
		{
			lst->next = node;
		}
		else
		{
			ft_lstapp(lst->next, node);
		}
	}
}
