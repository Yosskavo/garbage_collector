/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 08:18:04 by yel-mota          #+#    #+#             */
/*   Updated: 2025/08/05 09:30:06 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_free(void *ptr, int flag);
void				*ft_lstadd_back(t_list **head, t_list *new);
t_list				*ft_lstnew(void *ptr);
void				ft_clean_and_exit(void);
void				ft_clear_all(int flag);
t_list				*ft_global(t_list *new, int flag);
void				*ft_malloc(size_t size, int flag);
#endif
