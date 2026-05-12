/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:16:23 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:36:37 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_nodo;
	t_list	*new_list;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_nodo = ft_lstnew(f(lst->content));
		lst = lst->next;
		if (!new_nodo)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_nodo);
		lst = lst->next;
	}
	return (new_list);
}
/* #include <stdio.h>

void	*ft_add(void *content)
{
	char	*new;

	new = ft_strdup((char *)content);
	if (!new)
		return (NULL);

	new[0] = 'X';
	return (new);
}

int	main(void)
{
	t_list	*list_A = NULL;
	t_list	*list_B = NULL;

	ft_lstadd_back(&list_A, ft_lstnew(ft_strdup("Cat")));
	ft_lstadd_back(&list_A, ft_lstnew(ft_strdup("Dog")));

	list_B = ft_lstmap(list_A, ft_add, free);

	printf("Before: %s\n", (char *)list_A->content);
	printf("After: %s\n", (char *)list_B->content);

	ft_lstclear(&list_A, free);
	ft_lstclear(&list_B, free);

	return (0);
} */