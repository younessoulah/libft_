/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:42:24 by youllah           #+#    #+#             */
/*   Updated: 2022/10/21 16:42:07 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	temp = lst;
	count = 0;
	if (temp == NULL)
		return (0);
	else
	{
		while (temp)
		{
			count++;
			temp = temp -> next;
		}
	}
	return (count);
}

// int main()
// {
// 	t_list *l;

// }
