/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/31 13:59:32 by npineau           #+#    #+#             */
/*   Updated: 2014/05/31 14:03:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isx(char *str, int (*is)(int))
{
	while (*str)
	{
		if (!is(*str))
			return (0);
		str++;
	}
	return (1);
}
