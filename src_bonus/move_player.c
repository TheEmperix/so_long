#include "so_long.h"

void	move_up(t_game *game)
{
	char	*posnow;
	char	*posnext;
}
void	move_up(t_game *window)
{
	if (window->game[window->player.x - 1][window->player.y] == '0')
		|| (window->game[window->player.x - 1][window->player.y] == 'C')
	{
		window->game[window->bot.x][window->bot.y] = '0';
		draw_ground(window, window->bot.x, window->bot.y);
		(window->bot.x)--;
		window->game[window->player.x][window->player.y] = 'P';
		draw_player(window, window->player.x, window->player.y);
		if (window->game[window->player.x - 1][window->player.y] == 'C')
			window->map.collection--;
		if (window->map.collection == 0)
			find_exit(window);
		else if (window->game[window->player.x - 1][window->player.y] == 'E'
				 && window->map.collection == 0)
			exit(0);
	}
}