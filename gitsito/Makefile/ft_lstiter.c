/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:23:56 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:36:53 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>

void	ft_printf(void *content)
{
	printf("Nodo = %s\n", (char *)content);
}
int main(void)
{
	t_list	n1;
	t_list	n2;
	t_list	n3;
	t_list	*head;

	n1.content = "abc";
	n1.next = &n2;
	n2.content = "bcd";
	n2.next = &n3;
	n3.content = "efg";
	n3.next = NULL;

	head = &n1;
	printf("\n");
	ft_lstiter(head, ft_printf);
	return(0);
}*/