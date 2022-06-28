CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = ft_printf.a
.PHONY : all clean fclean re

SRC = ft_printf.c \
		libft/libft.a

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	@make -C libft/
	@ar -rc $(NAME) $(OBJ)

all : $(NAME)

clean :
	@echo "Cleaning up obj files..."
	@$(RM) $(OBJ)

fclean :
	@echo "Cleaning up obj and archive files..."
	@$(RM) $(NAME) $(OBJ)

re : fclean all
