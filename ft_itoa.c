/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:02:35 by youllah           #+#    #+#             */
/*   Updated: 2022/10/20 14:10:45 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lenght(int a)
{
	int	len;

	len = 0;
	if (a <= 0)
	{
		a *= -1;
		len++;
	}
	while (a > 0)
	{
		len++;
		a /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb = n;
	len = lenght(nb);
	s = malloc (len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (nb == 0)
		s[0] = 48;
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		s[len--] = 48 + (nb % 10);
		nb /= 10;
	}
	return (s);
}

// int main ()
// {
// 	printf("%s", ft_itoa(INT_MIN));
// }
