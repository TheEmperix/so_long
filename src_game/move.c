#include "so_long.h"

void	move_up(t_game *game)
{
	if (game->games[game->player.x - 1][game->player.y] == '0'
	|| game->games[game->player.x - 1][game->player.y] == 'C' )
	{
		game->games[game->player.x][game->player.y] = '0';
		draw_ground(game, game->player.x, game->player.y);
		(game->player.x)--;
		game->games[game->player.x][game->player.y] = 'P';
		draw_player(game, game->player.x, game->player.y);
		if (game->games[game->player.x - 1][game->player.y] == 'C')
			game->map.collection--;
		if (game->map.collection == 0)
			find_exit(game);
		else if (game->games[game->player.x - 1][game->player.y] == 'E'
		&& game->map.collection == 0)
			exit(0);
	}
}

void	move_down(t_game *game)
{
	if (game->games[game->player.x + 1][game->player.y] == '0'
		|| game->games[game->player.x + 1][game->player.y] == 'C' )
	{
		game->games[game->player.x][game->player.y] = '0';
		draw_ground(game, game->player.x, game->player.y);
		(game->player.x)--;
		game->games[game->player.x][game->player.y] = 'P';
		draw_player(game, game->player.x, game->player.y);
		if (game->games[game->player.x + 1][game->player.y] == 'C')
			game->map.collection--;
		if (game->map.collection == 0)
			find_exit(game);
		else if (game->games[game->player.x + 1][game->player.y] == 'E'
		&& game->map.collection == 0)
			exit(0);
	}
}

void	move_left(t_game *game)
{
	if (game->games[game->player.x][game->player.y - 1] == '0'
		|| game->games[game->player.x][game->player.y - 1] == 'C' )
	{
		game->games[game->player.x][game->player.y] = '0';
		draw_ground(game, game->player.x, game->player.y);
		(game->player.x)--;
		game->games[game->player.x][game->player.y] = 'P';
		draw_player(game, game->player.x, game->player.y);
		if (game->games[game->player.x][game->player.y - 1] == 'C')
			game->map.collection--;
		if (game->map.collection == 0)
			find_exit(game);
		else if (game->games[game->player.x][game->player.y - 1] == 'E'
		&& game->map.collection == 0)
			exit(0);
	}
}

void	move_right(t_game *game)
{
	if (game->games[game->player.x][game->player.y + 1] == '0'
		|| game->games[game->player.x][game->player.y + 1] == 'C' )
	{
		game->games[game->player.x][game->player.y] = '0';
		draw_ground(game, game->player.x, game->player.y);
		(game->player.x)--;
		game->games[game->player.x][game->player.y] = 'P';
		draw_player(game, game->player.x, game->player.y);
		if (game->games[game->player.x][game->player.y + 1] == 'C')
			game->map.collection--;
		if (game->map.collection == 0)
			find_exit(game);
		else if (game->games[game->player.x][game->player.y + 1] == 'E'
		&& game->map.collection == 0)
			exit(0);
	}
}

int	key_hook(int keycode, t_game *game)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == W)
		move_up(game);
	else if (keycode == S)
		move_down(game);
	else if (keycode == A)
		move_left(game);
	else if (keycode == D)
		move_right(game);
	return (0);
}
