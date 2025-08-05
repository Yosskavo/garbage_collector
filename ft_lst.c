/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:25:10 by yel-mota          #+#    #+#             */
/*   Updated: 2025/08/05 08:38:24 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

t_list	*ft_lst_last(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list	*ft_lstnew(void *ptr)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = ptr;
	new->next = NULL;
	return (new);
}

void	*ft_lstadd_back(t_list **head, t_list *new)
{
	if (!new)
		return (NULL);
	if (!*head)
		return (*head = new, (void *)1);
	ft_lst_last(*head)->next = new;
	return ((void *)1);
}
