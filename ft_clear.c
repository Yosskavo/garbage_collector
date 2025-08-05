/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:12:58 by yel-mota          #+#    #+#             */
/*   Updated: 2025/08/05 09:40:50 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void	ft_clear(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	while (*head)
	{
		tmp = tmp->next;
		free((*head)->content);
		free(*head);
		*head = tmp;
	}
}

void	ft_clear_all(int flag)
{
	t_list	*head;

	head = ft_global(NULL, flag);
	ft_clear(&head);
	ft_global(NULL, flag + 2);
}

void	ft_clean_and_exit(void)
{
	ft_clear_all(0);
	ft_clear_all(1);
	exit(1);
}
