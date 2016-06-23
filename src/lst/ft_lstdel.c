/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 14:39:45 by npineau           #+#    #+#             */
/*   Updated: 2014/05/06 13:01:37 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/lst.h"

void	ft_lstdel(t_lst **alst, void (*del)())
{
	if (alst && del)
	{
		if ((*alst)->next)
			ft_lstdel(&((*alst)->next), del);
		ft_lstdelone(alst, del);
	}
}
