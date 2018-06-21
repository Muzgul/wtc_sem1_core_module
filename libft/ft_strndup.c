/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:17:08 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 17:17:09 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ft_strnew(n);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
