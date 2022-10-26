/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:44:21 by youllah           #+#    #+#             */
/*   Updated: 2022/10/26 07:51:37 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char )c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	char c[] = "youness";
// 	char *j = ft_memset(c, 65, 11);

// 	// for (int i = 0; i < 6; i++)
// 		printf("%s\n", j);
// }
