/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:38:10 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:42:56 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*  #include <stdio.h>

int	main(void)
{
	t_list	n1, n2;
	t_list	*head;
	t_list	*next;

	n1.content = "One";
	n1.next = &n2;
	n2.content = "Two";
	n2.next = NULL;
	head = &n1;
	next = ft_lstlast(head);

	if (next)
		printf("%s\n", (char *)next->content);
	return (0);
}  */
