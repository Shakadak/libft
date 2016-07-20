/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 12:00:58 by npineau           #+#    #+#             */
/*   Updated: 2016/05/12 12:01:00 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/str.h"

char	*ft_strndup(size_t n, const char *src)
{
	size_t	len;
	char	*copy;

	copy = NULL;
	len = ft_strnlen(n, src);
	copy = (char *)malloc((1 + len) * sizeof(char));
	if (copy != NULL)
	{
		copy[len] = 0;
		while (len > 0)
		{
			len -= 1;
			copy[len] = src[len];
		}
	}
	return (copy);
}
