/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 11:39:56 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:43:03 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* #include <stdio.h>

int main(void)
{
	t_list n1, n2;
	t_list *head;

	n1.content = "One";
	n1.next = &n2;
	n2.content = "Two";
	n2.next = NULL;
	head = &n1;
	int	size = ft_lstsize(head);

	printf("Number nodos: %d\n", size);
	return (0);
} */
