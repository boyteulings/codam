.DEFAULT_GOAL := all
CFLAGS = -c -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_memcmp.c \
	ft_strchr.c \
	ft_strrchr.c

OBJ = ft_bzero.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_memset.o \
	ft_strlen.o \
	ft_strncmp.o \
	ft_tolower.o \
	ft_toupper.o \
	ft_memcmp.o \
	ft_strchr.o \
	ft_strrchr.o

all:
	@tput setab 28; tput setaf 0
	@echo "-< libft make >-"
	@tput sgr0
	@echo "Compiling..."
	@gcc $(CFLAGS) $(SRC)
	@echo "Creating static library..."
	@ar -rc $(NAME) $(OBJ)
	@tput setaf 2
	@echo "Done!"
	@tput sgr0

.PHONY: all clean fclean re

clean:
	@tput setab 9; tput setaf 0
	@echo "-> libft clean <-"
	@tput sgr0
	@tput setaf 1
	@echo "Cleaning up..."
	@tput sgr0
	@rm -f $(OBJ)
	@tput setaf 2
	@echo "Done!"
	@tput sgr0

fclean:
	@tput setab 9; tput setaf 226
	@echo "-x libft fclean x-"
	@tput sgr0
	@tput setaf 1
	@echo "Cleaning up obj and archive files..."
	@tput sgr0
	@rm -f $(NAME) $(OBJ)
	@tput setaf 2
	@echo "Done!"
	@tput sgr0

re: fclean all
