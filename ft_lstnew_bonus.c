/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:55:15 by youllah           #+#    #+#             */
/*   Updated: 2022/10/25 12:29:10 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	if (l)
	{
		l -> content = content;
		l -> next = NULL;
	}
	return (l);
}

// int main()
// {
// 	int *a;
// 	a = malloc(sizeof(int) * 2);
// 	int i = 16;
// 	a = &i;
// 	t_list *head = ft_lstnew(&i);
// 	t_list *h = ft_lstnew(a);
// 	head -> next = h;
// 	t_list *he = ft_lstnew("hi2");
// 	h -> next = he;
// 	t_list *hea = ft_lstnew("hi3");
// 	he -> next = hea;
// 	t_list *heaf = ft_lstnew("hi4");
// 	hea -> next = heaf;
// 	t_list *p;
// 	p = head;
// 	while (p)
// 	{
// 		printf("%d\n", *((int *)(head->content)));
// 		p = p -> next;
// 	}
// }
