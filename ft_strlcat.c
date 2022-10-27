/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:45:06 by youllah           #+#    #+#             */
/*   Updated: 2022/10/27 16:09:12 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	if ((!dest || !src) && destsize == 0)
		return (ft_strlen(src));
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	if (destsize && dl < destsize)
	{
		while (src[i] && i < destsize - dl - 1)
		{
			dest[dl + i] = src[i];
			i++;
		}
		dest[dl + i] = '\0';
		return (dl + sl);
	}
	return (sl + destsize);
}
