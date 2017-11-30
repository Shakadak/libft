/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstr_join_with.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:24:15 by npineau           #+#    #+#             */
/*   Updated: 2017/11/30 09:38:10 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	m_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len += 1;
	}
	return (len);
}

static char		*m_stpcpy(char *out, const char *in)
{
	size_t	i;

	i = 0;
	while (in[i] != '\0')
	{
		out[i] = in[i];
		i += 1;
	}
	out[i] = '\0';
	return (&(out[i]));
}

char			*mstr_join_with(char *glue, char **strs, size_t qty,
		size_t *len_out)
{
	size_t	i;
	char	*str;
	size_t	capacity;
	char	*end;

	i = 0;
	capacity = 0;
	while (i < qty)
	{
		capacity += m_strlen(strs[i]);
		i += 1;
	}
	capacity += (i - 1) * m_strlen(glue);
	str = malloc(sizeof(char) * (capacity + 1));
	*len_out = capacity;
	i = 0;
	end = str;
	while (i < qty)
	{
		end = m_stpcpy(end, strs[i]);
		i += 1;
		if (i < qty)
			end = m_stpcpy(end, glue);
	}
	return (str);
}
