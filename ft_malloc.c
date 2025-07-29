#include "ft_malloc.h"

void ft_malloc_error(void)
{
	perror("minishell");
	ft_clean_up();
	exit(1);
}

t_list *ft_global(t_list *ptr, int flag)
{
	static t_list *env;
	static t_list *some;

	if (ptr && flag == RANDOM_LIST)
		some = head;
	else
		env = head;
	if (RANDOM_LIST == flag)
		return (some);
	return (env);
}

void *ft_malloc(t_size size, int flag)
{
	void *ptr;
	t_list *head;

	ptr = malloc(size);
	if (!ptr)
		return (ft_malloc_error());
	head = ft_global(NULL, flag);
	if (!ft_add_list_back(&head, ft_lstnew(ptr)))
		return (ft_malloc_error());
	ft_global(NULL, flag);
	return (ptr);
}

