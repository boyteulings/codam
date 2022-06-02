CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = ft_printf.a
.PHONY : all clean fclean re

SRC = src/ft_printf.c \
	src/ft_putchar_count.c \
	src/ft_putstr_count.c \
	src/ft_putnbr_count.c

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)

all : $(NAME)

clean :
	@echo "Cleaning up obj files..."
	@$(RM) $(OBJ)

fclean :
	@echo "Cleaning up obj and archive files..."
	@$(RM) $(NAME) $(OBJ)

re : fclean all
