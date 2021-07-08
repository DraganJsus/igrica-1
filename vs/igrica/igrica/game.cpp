#include "game.h"

void game::set_grid(char screen[MAXN][MAXN], size_t size_x, size_t size_y)
{
	for (size_t i = 0; i < size_y; i++)
	{
		for (size_t j = 0; j < size_x; j++)
		{
			if (i == 0 || i == size_y - 1 || j == 0 || j == size_x - 1)
				screen[i][j] = '#';
			else
				screen[i][j] = ' ';

		}
	}
}

void game::draw(char screen[MAXN][MAXN], size_t size_x, size_t size_y, std::ostream& out)
{
	for (size_t i = 0; i < size_y; i++)
	{
		for (size_t j = 0; j < size_x; j++)
		{
			out << screen[i][j];
		}
		out << "\r\n";
	}
}

void game::input_values(size_t size_x, size_t size_y, size_t snake_size)
{
	game game;
	obstacle obstacle;

	game.screen;

	set_grid(screen, size_x, size_y);

	size_t ob_x = obstacle.position_x(size_x);
	size_t ob_y = obstacle.position_y(size_y);

	screen[ob_x][ob_y] = '#';

	draw(screen, size_x, size_y, std::cout);
}
