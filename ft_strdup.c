/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:44:48 by youllah           #+#    #+#             */
/*   Updated: 2022/10/21 13:25:29 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	l;
	char	*p;

	i = 0;
	l = 0;
	l = ft_strlen(s1);
	p = malloc (sizeof(char) * l + 1);
	if (!p)
		return (NULL);
	while (i < l)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main(void)
// {
// 	char a[] = "youness";
// 	printf("%s", ft_strdup(a));
// }
