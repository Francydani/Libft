/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 12:16:40 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:42:49 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tem;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tem;
	}
	*lst = NULL;
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head = NULL;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = malloc(sizeof(t_list));
	n2 = malloc(sizeof(t_list));
	n3 = malloc(sizeof(t_list));

	n1->content = ft_strdup("Hello");
	n1->next = n2;

	n2->content = ft_strdup("World");
	n2->next = n3;

	n3->content = ft_strdup("Apple");
	n3->next = NULL;
	head = n1;

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	ft_lstclear(&head, free);
	return (0);
}
*/