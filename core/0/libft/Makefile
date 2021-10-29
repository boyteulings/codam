.DEFAULT_GOAL := all
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
.PHONY: all clean fclean re
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
	ft_strrchr.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_atoi.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_strdup.c

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
	ft_strrchr.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_atoi.o \
	ft_memchr.o \
	ft_calloc.o \
	ft_strdup.o

all:
	@tput setab 28; tput setaf 0
	@echo "-< libft make >-"
	@tput sgr0
	@echo "Compiling..."
	@gcc -c $(CFLAGS) $(SRC)
	@echo "Creating static library..."
	@ar -rc $(NAME) $(OBJ)
	@tput setaf 2
	@echo "Done!"
	@tput sgr0

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
