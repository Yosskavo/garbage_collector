NAME = ft_malloc.a

SRC = ft_malloc.c ft_lst.c ft_clear.c ft_global.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c 
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean :
	@rm -fv $(OBJ)

fclean : clean
	@rm -fv $(NAME)

re : fclean all

.PHONY : re all clean fclean
