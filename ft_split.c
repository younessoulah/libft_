/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:44:30 by youllah           #+#    #+#             */
/*   Updated: 2022/10/26 07:52:22 by youllah          ###   ########.fr       */
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

static	char	**my_free(char **sp)
{
	size_t	i;

	i = 0;
	while (sp[i])
	{
		free(sp[i]);
		i++;
	}
	free(sp);
	return (sp);
}

static	char	**fill(char **sp, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			sp[w] = ft_substr(s, start, i - start);
			if (!sp[w])
				return (my_free(sp));
			w++;
		}
		else
			i++;
	}
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;

	if (!s)
		return (NULL);
	sp = ft_calloc((manywords(s, c) + 1), sizeof(char *));
	if (!sp)
		return (NULL);
	return (fill(sp, s, c));
}

// int main()
// {
// 	char **x;
// 	char a[] = "  ypioejvj ocownc    dnc'ohwo  oij";
// 	x = ft_split(a, ' ');
// 	for(int i = 0; i < 4; i++)
// 		printf("%s\n", x[i]);
// }
