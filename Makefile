NAME = malloc

SRC = ft_malloc.c ft_lst.c ft_clear.c ft_global.c main.c ft_free.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c 
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME) : $(OBJ)
	cc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean : 
	@rm -rv $(OBJ)

fclean : clean
	@rm -rv $(NAME)

re : fclean all

.PHONY : re all clean fclean
