CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = ft_printf.a
.PHONY : all clean fclean re

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

LIBFT = ./libft

$(NAME) : $(OBJ)
	@$(MAKE) -C $(LIBFT)
	@ar -rc $(NAME) $(OBJ) $(LIBFT)/*.o

all : $(NAME)

clean :
	@echo "Cleaning up obj files..."
	@$(MAKE) clean -C $(LIBFT)
	@$(RM) $(OBJ)

fclean :
	@echo "Cleaning up obj and archive files..."
	@$(MAKE) fclean -C $(LIBFT)
	@$(RM) $(NAME) $(OBJ)

re : fclean all
