/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 12:16:58 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:42:52 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	nodo->content = ft_strdup("Hello");
	nodo->next = NULL;

	printf("%s\n", (char *)nodo->content);

	ft_lstdelone(nodo, free);

	printf("%p\n", (char *)nodo->content);
	return(0);
} */