#include "so_long.h"

void	load_object(t_game *game)
{
	game->thief.img = mlx_xpm_file_to_image(game->map.mlx,
			"./texture/thief.xpm", &game->thief.width, &game->thief.height);
	game->ground.img = mlx_xpm_file_to_image(game->map.mlx,
			"./texture/ground.xpm", &game->ground.width, &game->ground.height);
	game->tree.img = mlx_xpm_file_to_image(game->map.mlx,
			"./texture/tree.xpm", &game->tree.width, &game->tree.height);
	game->roll.img = mlx_xpm_file_to_image(game->map.mlx,
			"./texture/roll.xpm", &game->roll.width, &game->roll.height);
	game->manhole.img = mlx_xpm_file_to_image(game->map.mlx,
			"./texture/manhole_close.xpm", &game->manhole.width,
			&game->manhole.height);
}
