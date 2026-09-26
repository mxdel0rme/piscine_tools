CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c99 -pedantic -Iinclude
SRC     = $(wildcard src/*.c)
OBJ     = $(SRC:.c=.o)
NAME    = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

check: $(NAME)
	$(CC) $(CFLAGS) tests/main.c -L. -lmy -o tests/run
	./tests/run

clean:
	$(RM) $(OBJ) tests/run

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all check clean fclean re
