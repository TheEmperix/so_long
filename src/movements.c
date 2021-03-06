#include "../inc/so_long.h"

void	movements(int keycode, t_game *vars)
{
	if (keycode == W)
		vars->pos_player.y -= 1;
	if (keycode == S)
		vars->pos_player.y += 1;
	if (keycode == A)
		vars->pos_player.x -= 1;
	if (keycode == D)
		vars->pos_player.x += 1;
	write(1, "moves: ", 8);
	ft_putnbr(vars->score);
	write(1, "\n", 1);
}

void	finish_game(t_game *vars)
{
	if (vars->file_map[vars->pos_player.y][vars->pos_player.x] == 'e')
	{
		ft_putstr("you won !\n");
		exit(0);
	}
	if (vars->file_map[vars->pos_player.y][vars->pos_player.x] == 'A')
	{
		ft_putstr("game is over!\n");
		exit(0);
	}
}

void	redraw(t_game **vars)
{
	int	i;
	int	j;

	i = 0;
	while ((*vars)->file_map[i])
	{
		j = 0;
		while ((*vars)->file_map[i][j])
		{
			if ((*vars)->file_map[i][j] == 'P')
			{
				(*vars)->file_map[i][j] = '0';
			}
			if (i == (*vars)->pos_player.y && j == (*vars)->pos_player.x)
				(*vars)->file_map[i][j] = 'P';
			if ((*vars)->chr.collect == 0 && (*vars)->file_map[i][j] == 'E')
				(*vars)->file_map[i][j] = 'e';
			finish_game(*vars);
			j++;
		}
		i++;
	}
}

int	player_moves(int keycode, t_game **vars)
{
	if (keycode == 53)
		exit(0);
	movements(keycode, *vars);
	if ((*vars)->file_map[(*vars)->pos_player.y][(*vars)->pos_player.x] !=
		'1' &&
		(*vars)->file_map[(*vars)->pos_player.y][(*vars)->pos_player.x] != 'E')
	{
		redraw(vars);
		(*vars)->score += 1;
	}
	map((*vars)->file_map, *vars);
	return (0);
}
