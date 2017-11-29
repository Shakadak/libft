/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:17:25 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 14:43:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*l;
	unsigned char	*r;

	i = 0;
	l = (unsigned char*)s1;
	r = (unsigned char*)s2;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
		i += 1;
	return (s1[i] - s2[i]);
}
