#ifndef SO_LONG_SO_LONG_H
# define SO_LONG_SO_LONG_H

#define W 13
#define S 1
#define A 0
#define D 2

# include "../minilibx/mlx.h"
# include <unistd.h>
# include <stdlib.h>
# include "../gnl/get_next_line.h"
# include "../printf/includes/ft_printf.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	int		map_height;
	int		map_width;
	int		collection;
}		t_vars;

typedef struct s_thief
{
	void	*img;
	int		width;
	int		height;
}		t_thief;

typedef struct s_roll
{
	void	*img;
	int		width;
	int		height;
}		t_roll;

typedef struct s_object
{
	void	*img;
	int		width;
	int		height;
}		t_object;

typedef	struct s_player
{
	int	x;
	int	y;
	int	score;
}		t_player;

typedef struct s_game
{
	t_vars		map;
	t_player	player;
	t_roll		roll;
	t_object	tree;
	t_object	ground;
	t_object	manhole;
	t_thief		thief;
	int			column;
	int			row;
	char		**games;
}				t_game;

void	load_object(t_game *game);
void	draw_tree(t_game *game, int x, int y);
void	draw_player(t_game *game, int x, int y);
void	draw_ground(t_game *game, int x, int y);
void	draw_roll(t_game *game, int x, int y);
void	draw_manhole(t_game *game, int x, int y);
void	draw_map(t_game *game);
char	*get_next_line(int fd);
void	init_map(t_game *game);
char	*ft_itoa(int n);
void	move_up(t_game *game);
void	move_down(t_game *game);
void	move_left(t_game *game);
void	move_right(t_game *game);
int		key_hook(int keycode, t_game *game);
void	ft_putnbr_fd(int n, int *fd);
void	find_exit(t_game *game);
void	draw_score(t_game *game);
int	count_heigth(char *str);
int	main(int argc, char **argv)
#endif