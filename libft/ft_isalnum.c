/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 14:10:45 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/14 14:10:46 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	int		is_a;
	int		is_d;

	is_a = ft_isalpha(c);
	is_d = ft_isdigit(c);
	if (is_a != 0 || is_d != 0)
		return (c);
	return (0);
}