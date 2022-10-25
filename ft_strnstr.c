/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:45:54 by youllah           #+#    #+#             */
/*   Updated: 2022/10/25 13:20:34 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!little || !big) && len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
// int main()
// {
// 	char a[] = "aaabccccbcd";
// 	char b [] =  "aabc";
// 	char *p = strnstr(a, b, 9);
// 	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
// }
