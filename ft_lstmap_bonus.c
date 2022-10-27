/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:11:52 by youllah           #+#    #+#             */
/*   Updated: 2022/10/27 16:43:56 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	p = ft_lstnew(f(lst -> content));
	if (!p)
		return (0);
	temp = p;
	lst = lst -> next;
	while (lst)
	{
		p -> next = ft_lstnew(f(lst -> content));
		if (!p -> next)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		p = p -> next;
		lst = lst -> next;
	}
	return (temp);
}
