/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:12:09 by youllah           #+#    #+#             */
/*   Updated: 2022/10/24 10:15:30 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = *lst;
	if (!*lst)
		ft_lstadd_front(lst, new);
	else
	{
		while (p -> next)
		p = p -> next;
		p -> next = new;
	}
}
// int main()
// {
//   char a[] = "youness";
//   char b[] = "oullah";
//   char c[] = "second";
//     t_list    *head;
//     head = malloc (sizeof(t_list));
//     head -> content = a;
//     head -> next = NULL;

//     t_list *second = malloc(sizeof(t_list));
//     second -> content = c;
//     second -> next = NULL;

//     head -> next = second;

//     t_list    *new;
//     new = malloc(sizeof(t_list));
//     new -> content = b;
//     new -> next = NULL;

//     ft_lstadd_back(&head, new);

//     new = head;
//     while (new)
//     {
//         printf("%s\n", new -> content);
//         new = new -> next;
//     }
// }
