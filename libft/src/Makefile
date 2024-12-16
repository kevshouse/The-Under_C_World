# **************************************************************************** #
#                                Makefile                                    #
# **************************************************************************** #

# Compiler and flags
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror

# Files and directories
SRC     := ft_putchar_fd.c \
           ft_putendl_fd.c \
           ft_putnbr_fd.c \
           ft_putstr_fd.c \
           ft_strdup.c \
           ft_strjoin.c \
           ft_strlen.c \
           ft_substr.c \
           ft_strjoin_runner.c \
           t_substr_runner.c

OBJ     := $(SRC:.c=.o)
NAME    := program
HEADER  := libft.h

# Default rule
all: $(NAME)

# Linking the final executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Compiling object files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean object files and the executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re

