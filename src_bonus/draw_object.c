#include	"so_long.h"

void	draw_tree(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->texture.tree.img, x * 50, y * 50);
}

void	draw_player(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->texture.thief1.img, x * 50, y * 50);
}

void	draw_ground(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->texture.ground.img, x * 50, y * 50);
}

void	draw_roll(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->texture.roll1.img, x * 50, y * 50);
}

void	draw_manhole(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->texture.manhole_close.img, x * 50, y * 50);
}
