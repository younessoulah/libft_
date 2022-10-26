/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:43:46 by youllah           #+#    #+#             */
/*   Updated: 2022/10/26 07:51:22 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char a[] = "youness";
// 	char b[5];
// 	char *x = ft_memcpy(NULL,NULL,5);
// 	printf("%s\n", b);
// 	memcpy(NULL, NULL, 5);
// 	printf("%s\n", b);
// }
