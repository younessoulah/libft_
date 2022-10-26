/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:05:04 by youllah           #+#    #+#             */
/*   Updated: 2022/10/26 07:52:00 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	if (s)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
}

// int main()
// {
// 	int fd = open("test1", O_RDWR | O_CREAT, 0777);
// 	ft_putstr_fd("hello world", fd);
// }
