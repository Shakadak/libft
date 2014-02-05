/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 15:59:00 by npineau           #+#    #+#             */
/*   Updated: 2014/02/05 12:08:48 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c);

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(const char *src)
{
	int		i;
	int		l;
	char	*new;

	if (!src)
		return (NULL);
	i = 0;
	l = ft_strlen(src);
	while (ft_isspace(src[l - 1]) && l > 0)
		l--;
	while (ft_isspace(src[i]) && src[i])
		i++;
	l -= i;
	if (l < 0)
		l = 0;
	new = ft_strnew(l + 1);
	if (!new)
		return (NULL);
	new = ft_strncpy(new, &src[i], l);
	return (new);
}
