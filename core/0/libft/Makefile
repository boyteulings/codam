.DEFAULT_GOAL := all
CFLAGS = -c -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_*.c

OBJ = *.o

all:
	@echo "Compiling..."
	@gcc $(CFLAGS) $(SRC)
	@echo "Creating static library..."
	@ar -rc $(NAME) $(OBJ)
	@tput setaf 2; echo "Done!"; tput sgr0


$(NAME): all

.PHONY: all clean fclean re

clean:
	@tput setaf 1; echo "Cleaning up..."; tput sgr0 
	@rm -f ft_*.o
	@rm -f libft.a
	@tput setaf 2; echo "Done!"; tput sgr0

fclean: clean

re: fclean all
