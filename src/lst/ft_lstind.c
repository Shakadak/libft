/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstind.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 13:17:53 by npineau           #+#    #+#             */
/*   Updated: 2016/06/24 13:17:55 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

t_lst	*ft_lstind(t_lst *lst, size_t index)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	else if (index == 0)
	{
		return (lst);
	}
	else
	{
		return (ft_lstind(lst->next, index - 1));
	}
}
