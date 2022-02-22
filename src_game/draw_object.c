#include    "so_long.h"

void	draw_tree(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->tree.img, x * 50, y * 50);
}

void	draw_player(t_game *game, int x, int y)
{
	game->player.x = x;
	game->player.x = y;
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->thief.img, x * 50, y * 50);
}

void	draw_ground(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->ground.img, x * 50, y * 50);
}

void	draw_roll(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->roll.img, x * 50, y * 50);
}

void	draw_manhole(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->manhole.img, x * 50, y * 50);
}
