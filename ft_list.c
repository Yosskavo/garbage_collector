#include "ft_malloc.h"

t_list *ft_lstnew(void *ptr)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
		return (ft_malloc_error(), NULL);
	memset(new, 0, sizeof(t_list));
	new->content = new;
	return (new);
}

void ft_lst_add_back(t_list **head, t_list *new)
{
	t_list *tmp;

	if (!new)
		return ;
	if (!*head)
		return (*head = new, (void)1);
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

