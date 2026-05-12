/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 11:09:53 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:42:45 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main(void)
{
	t_list *list = NULL;
	t_list	nodo;

	nodo.content = "dog";
	nodo.next = NULL;
	ft_lstadd_front(&list, &nodo);
	printf("%s\n", (char *)list->content);
	return(0);
}
*/