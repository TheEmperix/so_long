NAME = so_long
CC = gcc
FLAGS = -Wall -Werror -Wextra
FLAGS_M = -lmlx -framework OpenGL -framework AppKit
RM = rm -rf

HEADER = ./inc/so_long.h ./gnl/get_next_line.h

SRC = ./src/so_long.c ./src/check.c ./gnl/get_next_line.c ./gnl/get_next_line_utils.c\
	./src/draw.c ./src/movements.c ./src/search.c ./src/utils.c ./src/ft_itoa.c

OBJ = $(patsubst %.c,%.o,$(SRC))

all:	$(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(FLAGS) $(FLAGS_M) $(OBJ) -o $(NAME)

%.o:	%.c Makefile $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean:
		$(RM) ${OBJ}

fclean:	clean
		$(RM) so_long

re:	fclean all

.PHONY: all clean fclean re

