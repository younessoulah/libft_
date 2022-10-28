/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:42:30 by youllah           #+#    #+#             */
/*   Updated: 2022/10/27 21:08:04 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*p;

	i = 0;
	if (count && size > SIZE_MAX / count)
		return (0);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	while (i < count * size)
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return (p);
}
