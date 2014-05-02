/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 15:03:39 by npineau           #+#    #+#             */
/*   Updated: 2014/05/02 15:31:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	int		len;

	len = ft_strlen(s1);
	new = ft_strnew(len + ft_strlen(s2));
	if (!new)
		return (NULL);
	ft_strcpy(new, s1);
	ft_strcpy(&new[len], s2);
	return (new);
}
