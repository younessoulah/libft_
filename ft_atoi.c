/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:40:51 by youllah           #+#    #+#             */
/*   Updated: 2022/10/23 11:06:43 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if ((res > 9223372036854775807) && sign == 1)
		return (-1);
	if ((res > 9223372036854775807) && sign == -1)
		return (0);
	return (res * sign);
}

// int	main(void)
// {
// 	// printf("%d", ft_atoi("-123"));
// 	printf("Their > %d\n", atoi("9223372036854L"));
// 	printf("Mine => %d\n", ft_atoi("9223372036854L"));
// }

// 	printf("Their > %d\n", atoi("-21474836477"));
// 	printf("Mine => %d\n", ft_atoi("-21474836477"));

// 	printf("Their > %d\n", atoi("2147483647"));
// 	printf("Mine => %d\n", ft_atoi("2147483647"));

// 	printf("Their > %d\n", atoi("4294967297"));
// 	printf("Mine => %d\n", ft_atoi("4294967297"));
// }
