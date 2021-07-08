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
	struct for_snake
	{
		size_t cord_tail_x;
		size_t cord_tail_y;
		bool if_head;
	};

	game game;
	obstacle obstacle;
	player player;
	snake snake;
	

	game.screen;

	set_grid(screen, size_x, size_y);

	size_t ob_y = obstacle.position_x(size_x);
	size_t ob_x = obstacle.position_y(size_y);

	screen[ob_x][ob_y] = '#';

	// for obstacle

	player.cord_x = size_x / 2 + 1;
	player.cord_y = size_y - 2;

	// for player

	size_t sn_x;
	size_t sn_y;

	// for snake

	weapon bullets[3];
    bullets[0].active = false;
	bullets[1].active = false;
	bullets[2].active = false;
	bullets[0].cord_x = NULL;
	bullets[0].cord_y = NULL;
	bullets[1].cord_x = NULL;
	bullets[1].cord_y = NULL;
	bullets[2].cord_x = NULL;
	bullets[2].cord_y = NULL;

	while (1 > 0)
	{

		screen[player.cord_y][player.cord_x] = ' ';
		screen[bullets[0].cord_y][bullets[0].cord_x] = ' ';
		screen[bullets[1].cord_y][bullets[1].cord_x] = ' ';
		screen[bullets[2].cord_y][bullets[2].cord_x] = ' ';
		 

		player.movement(player, size_x,bullets);

		screen[player.cord_y][player.cord_x] = 'W';

		// for player

		snake.move(snake_size);

		for (size_t i = 0; i < snake_size; i++)
		{
			sn_x = snake.tail[i].body_x;
			sn_y = snake.tail[i].body_y;

			screen[sn_y][sn_x] = 'o';
		}

		// for snake
		for (int i = 0; i < 3; i++)
		{
			if (bullets[i].active == true && bullets[i].cord_y>1)
			{
				bullets[i].cord_y--;
			}
		}
		

		screen[bullets[0].cord_y][bullets[0].cord_x] = '*';
		screen[bullets[1].cord_y][bullets[1].cord_x] = '*';
		screen[bullets[2].cord_y][bullets[2].cord_x] = '*';

		// for weapon

		draw(screen, size_x, size_y, std::cout);

		system("cls");
	}
}
