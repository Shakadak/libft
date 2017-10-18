/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:54:06 by npineau           #+#    #+#             */
/*   Updated: 2017/10/18 15:27:37 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isalpha(char c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
