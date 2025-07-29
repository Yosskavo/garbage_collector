#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# include <stdlib.h>

# define RANDOM_LIST 1
# define ENV_LIST 2

typedef struct s_list 
{
	void *ptr;
	struct s_list *next;
	struct s_list *previous;
}	t_list;

void	ft_clean_up(void);
void	ft_free_all(int flag);
void	ft_free(void *ptr, int flag);
void ft_malloc_error(void);
void *ft_malloc(t_size size, int flag);



#endif
