/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:03:24 by yel-mota          #+#    #+#             */
/*   Updated: 2025/08/05 09:40:51 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void	*ft_malloc(size_t size, int flag)
{
	void	*ptr;
	t_list	*lst;

	ptr = malloc(size);
	if (!ptr)
		ft_clean_and_exit();
	lst = ft_global(NULL, flag);
	if (!ft_lstadd_back(&lst, ft_lstnew(ptr)))
		return (free(ptr), ft_clean_and_exit(), NULL);
	ft_global(lst, flag);
	return (ptr);
}
