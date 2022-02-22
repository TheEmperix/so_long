#include "so_long.h"

void	find_exit(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->row)
	{
		j = 0;
		while (j < game->column)
		{
			if (game->games[i][j] == 'E')
				mlx_put_image_to_window(game->map.mlx, game->map.win,
					game->manhole.img, j * 50, i * 50);
			j++;
		}
		i++;
	}
}

void	draw_score(t_game *game)
{
	char	*count;

	mlx_put_image_to_window(game->map.mlx, game->map.win, game->tree.img, 0, 0);
	(game->player.score)++;
	count = ft_itoa(game->player.score);
	mlx_string_put(game->map.mlx, game->map.win, 0, 0, 0x00FF0000, count);
	free(count);
	ft_printf("%d\n", game->player.score);
}
