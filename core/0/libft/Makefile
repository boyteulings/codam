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
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strjoin.c \
	ft_substr.c \
	ft_strtrim.c \
	ft_itoa.c

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
	ft_strdup.o \
	ft_strlcpy.o \
	ft_strlcat.o \
	ft_strnstr.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o \
	ft_strjoin.o \
	ft_substr.o \
	ft_strtrim.o \
	ft_itoa.o

all:
	@echo "-< libft make >-"
	@echo "Compiling..."
	@gcc -c $(CFLAGS) $(SRC)
	@echo "Creating static library..."
	@ar -rc $(NAME) $(OBJ)
	@tput setaf 2
	@echo "Done!"
	@tput sgr0

clean:
	@echo "-> libft clean <-"
	@echo "Cleaning up..."
	@rm -f $(OBJ)
	@tput setaf 2
	@echo "Done!"
	@tput sgr0

fclean:
	@echo "-x libft fclean x-"
	@echo "Cleaning up obj and archive files..."
	@tput sgr0
	@rm -f $(NAME) $(OBJ)
	@tput setaf 2
	@echo "Done!"
	@tput sgr0

re: fclean all
