/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 09:17:18 by francysa          #+#    #+#             */
/*   Updated: 2026/05/13 11:26:54 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultima;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		ultima = ft_lstlast(*lst);
		ultima->next = new;
	}
}

/* #include <stdio.h>

int	main(void)
{
	t_list	n1, n2;
	t_list	new;
	t_list	*head;

	n1.content = "One";
	n1.next = &n2;
	n2.content = "Two";
	n2.next = NULL;

	new.content = "Three";
	new.next = NULL;
	head = &n1;
	ft_lstadd_back(&head, &new);

	printf("%s\n", (char*)ft_lstlast(head)->content);
	return (0);
} */