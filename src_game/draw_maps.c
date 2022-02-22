#include "so_long.h"

void	draw_map(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->row)
	{
		j = 0;
		while (j < game->column)
		{
			if (game->games[i][j] == '1')
				draw_tree(game, i, j);
			else if (game->games[i][j] == 'C')
				draw_roll(game, i, j);
			else if (game->games[i][j] == 'E')
				draw_manhole(game, i, j);
			else if (game->games[i][j] == 'P')
				draw_player(game, i, j);
			else
				draw_ground(game, i, j);
			j++;
		}
		i++;
	}
}

int	count_heigth(char *str)
{
	int		count;
	char	*s;
	int		fd;

	count = 0;
	fd = open(str, O_RDONLY);
	if (fd < 0)
		return (0);
	s = get_next_line(fd);
	if (s == NULL)
	{
		close(fd);
		return (0);
	}
	while (s != NULL)
	{
		count++;
		s = get_next_line(fd);
	}
	close(fd);
	return (count);
}
