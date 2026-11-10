NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = lib/ft_atoi.c lib/ft_check_int.c lib/ft_duparg.c lib/ft_get_arg.c \
      lib/ft_init_flag.c lib/ft_isdigit.c lib/ft_valid_flag.c lib/ft_strncmp.c \
	  lib/ft_putstr_fd.c push_swap.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re