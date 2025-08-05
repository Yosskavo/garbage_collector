/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:35:08 by yel-mota          #+#    #+#             */
/*   Updated: 2025/08/05 09:36:18 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

int	main(void)
{
	char	*dest;
	int		i;

	dest = (char *)ft_malloc(6, 0);
	dest = (char *)ft_malloc(6, 0);
	dest = (char *)ft_malloc(6, 0);
	dest = (char *)ft_malloc(6, 0);
	dest = (char *)ft_malloc(6, 0);
	dest = (char *)ft_malloc(6, 0);
	dest = (char *)ft_malloc(6, 0);
	i = 0;
	while (i < 5)
	{
		dest[i] = "hello"[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	ft_clear_all(0);
	dest = (char *)ft_malloc(6, 0);
	ft_clear_all(0);
}
