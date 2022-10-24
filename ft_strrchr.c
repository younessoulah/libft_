/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:46:03 by youllah           #+#    #+#             */
/*   Updated: 2022/10/19 23:40:29 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)s + len);
	}
	return (0);
}

// int main(void)
// {
// 	char a[] = "youness";
// 	printf("%s", ft_strrchr(a, '\0'));
// }
