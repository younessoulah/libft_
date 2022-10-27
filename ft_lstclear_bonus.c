/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:37:34 by youllah           #+#    #+#             */
/*   Updated: 2022/10/26 08:49:47 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del && *lst)
	{
		temp = *lst;
		while (*lst)
		{
			*lst = temp -> next;
			ft_lstdelone(temp, del);
			temp = *lst;
		}
	}
}
