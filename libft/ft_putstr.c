/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:15:24 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 10:15:24 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	while(s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}