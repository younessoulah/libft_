/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youllah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:50:51 by youllah           #+#    #+#             */
/*   Updated: 2022/10/24 10:35:13 by youllah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst -> content);
		free(lst);
	}
}

// void	dell(void *c)
// {
// 	free (c);
// }

// int main()
// {

// 	void (*k)(void *);
// 	k = &dell;

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
//     new -> content = NULL;
//     new -> next = NULL;

//     ft_lstadd_back(&head, new);

// 	ft_lstdelone(new, k);

// 	 t_list	*x = head;
//     while (x)
//     {
//         printf("%s\n", x -> content);
//         x = x -> next;
//     }
// }
