/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:55:15 by youllah           #+#    #+#             */
/*   Updated: 2022/10/24 18:35:34 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

// int main()
// {
// 	int a = 5, b = 10, c = 15;
// 	t_list	*head;
// 	head = malloc (sizeof(t_list));
// 	head -> content = "youness";
// 	head -> next = NULL;

// 	t_list	*p;
// 	p = malloc(sizeof (t_list));
// 	p -> content = "hello";
// 	p -> next = NULL;

// 	head -> next = p;

// 	t_list	*new;
// 	new = malloc (sizeof(t_list));
// 	new -> content = "world";
// 	new -> next = NULL;

// 	ft_lstadd_front(&head, new);

// 	p = head;
// 	while (p)
// 	{
// 		printf ("%s\n", p->content);
// 		p = p -> next;
// 	}
// }
