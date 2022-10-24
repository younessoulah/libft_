/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:44:56 by youllah           #+#    #+#             */
/*   Updated: 2022/10/17 22:01:52 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*p;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
		return ((char *)s2);
	if (!s2 && s1)
		return ((char *)s1);
	l = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(l + 1);
	if (!p)
		return (NULL);
	ft_memmove(p, s1, ft_strlen(s1));
	ft_memmove(p + ft_strlen(s1), s2, ft_strlen(s2));
	p[l] = '\0';
	return (p);
}

// int main()
// {
// 	char a[] = "youness";
// 	char b[] = "oullah";
// 	// char *b;
// 	printf("%s",ft_strjoin(a, b));
// }
