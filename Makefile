NAME = so_long
SRC = ./gnl/get_next_line.c ./gnl/get_next_line_utils.c ./src_game/2.c ./src_game/ft_itoa.c \
 	./src_game/draw_object.c ./src_game/move.c
OBJ = get_next_line.o get_next_line_utils.o 2.o ft_itoa.o draw_object.o  move.o

MAIN_SRC = ./src_game/so_long.c ./src_game/loading_object.c ./src_game/draw_maps.c	./src_game/1.c
MAIN_OBJ = so_long.o loading_object.o draw_maps.o 1.o

all: $(NAME)

$(NAME): $(OBJ) $(MAIN_OBJ)
	make -C ./printf
	cc -Lminilibx -lmlx -framework OpenGL -framework AppKit  $(OBJ) $(MAIN_OBJ) ./printf/libftprintf.a -o so_long

$(OBJ): $(SRC) ./gnl/get_next_line.h
	cc -Wall -Werror -Wextra -I./gnl/ -c $(SRC)

$(MAIN_OBJ): $(MAIN_SRC) ./src_game/so_long.h
	cc -Wall -Werror -Wextra -I./src_game/so_long.h -c $(MAIN_SRC)

clean:
	make fclean -C ./printf
	rm -rf *.o

fclean: clean
	make fclean -C ./printf
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re