/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:44:10 by youllah           #+#    #+#             */
/*   Updated: 2022/10/17 16:14:39 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dest)
	{
		while (len)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
		dest = ft_memcpy(dest, src, len);
	return (dest);
}

// int	main(void)
// {
// 	char a[] = "youness";
// 	char b[] = "";
// 	// char *p = malloc(1);
// 		printf("%s\n",ft_memmove(b, a, 1));
// }
