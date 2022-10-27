/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:45:17 by youllah           #+#    #+#             */
/*   Updated: 2022/10/27 16:09:16 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	ls;

	i = 0;
	ls = ft_strlen(src);
	if (destsize != 0)
	{
		while (src[i] && i < destsize -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ls);
}
