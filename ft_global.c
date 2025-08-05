/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_global.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:03:36 by yel-mota          #+#    #+#             */
/*   Updated: 2025/08/05 09:35:52 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

t_list	*ft_global(t_list *new, int flag)
{
	static t_list	*head;
	static t_list	*env;

	if ((new || !(flag - 2)) && (!flag || !(flag - 2)))
		head = new;
	if ((flag == 1 || flag - 2 == 1) && (new || flag - 2 == 1))
		env = new;
	if (!flag)
		return (head);
	return (env);
}
