/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:44:30 by youllah           #+#    #+#             */
/*   Updated: 2022/10/24 16:42:34 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	manywords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		if (s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}



char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	char	**sp;
	size_t	w;

	i = 0;
	w = 0;
	if (!s)
		return (NULL);
	sp = ft_calloc((manywords(s, c) + 1), sizeof(char *));
	if (!sp)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			sp[w++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	return (sp);
}

// int main()
// {
// 	char **x;
// 	char a[] = "                 ";
// 	x = ft_split(a, ' ');
// 	printf("%s\n", x);
// }
