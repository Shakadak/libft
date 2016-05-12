/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:42:20 by npineau           #+#    #+#             */
/*   Updated: 2014/05/06 13:06:27 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	size_t	i;
	char	*copy;

	len = ft_strlen(src);
	copy = NULL;
	if (len != 0)
	{
		i = 0;
		copy = (char *)malloc((1 + len) * sizeof(char));
		if (copy != NULL)
		{
			while (i < len)
			{
				copy[i] = src[i];
				i++;
			}
			copy[i] = 0;
		}
	}
	return (copy);
}
