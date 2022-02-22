#ifndef SO_LONG_SO_LONG_H
# define SO_LONG_SO_LONG_H
# include "minilibx/mlx.h"
# include <stdio.h>

typedef struct s_properties
{
	int width;
	int height;
	int start;
	int finish;
	int collection;
} data_map;

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
}				par_img;

typedef struct s_texture
{
	par_img	roll1;
	par_img	roll2;
	par_img	roll3;
	par_img	manhole_close;
	par_img	manhole_open;
	par_img	thief1;
	par_img	thief2;
	par_img	thief3;
	par_img	guardian1;
	par_img	guardian2;
	par_img	guardian3;
	par_img	tree;
	par_img	ground;
}				par_texture;
typedef	struct s_player
{
	int	x;
	int	y;
	int	score;
} t_player;

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	int	width_window;
	int	heigth_window;
	int	column;
	int	row;
	char	**game;
	par_texture	texture;
	data_map	map;

	t_player	player	;
}				t_game;
#endif
