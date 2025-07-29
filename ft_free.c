#include "ft_malloc.h"

void	ft_free(void *ptr, int flag)
{
	t_list *head;

	head = ft_global(NULL, flag);
	while (head->content != ptr)
		head = head->next;
	if (head->next)
	{
		head->next->previous = head->previous;
		head->previous->next = head->next;
	}
	else if (!(head->previous))
		head->next->previous = NULL;
	else
		head->previous->next = NULL;
	free(head->content);
	free(head);
}

void	ft_free_all(int flag)
{
	t_list	*head;
	t_list	*tmp;

	head = ft_global(flag);
	tmp = NULL;
	while (head)
	{
		if (head->next)
			tmp = head->next;
		free(head->content);
		free(head);
		head = tmp;
	}
}

void	ft_clean_up(void)
{
	ft_free_all(RANDOM_LIST);
	ft_free_all(ENV_LIST);
}
