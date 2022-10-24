/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:52:37 by youllah           #+#    #+#             */
/*   Updated: 2022/10/24 10:18:43 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*p;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	p = malloc (len + 1);
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// char	rrrr(unsigned int a, char b)
// {
// 	(void)a;
// 	if ((b >= 'a' && b < 'z') || (b >= 'A' && b < 'Z'))
// 		b += 1;
// 	else if ((b == 'z') || (b == 'Z'))
// 		b -= 25;
// 	return (b);
// }

// int	main(void)
// {
// 	char a[] = "abcZ";
// 	char (*k)(unsigned int, char);
// 	k = &rrrr;
// 	printf("%s\n", ft_strmapi(a, k));
// }
