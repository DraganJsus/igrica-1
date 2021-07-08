#include "snake.h"

struct body_cords
{
	size_t body_x;
	size_t body_y;
	size_t right_left_down;
	size_t route_reminder;
};

std::vector <body_cords> tail;

snake::body_cords snake::move(size_t snake_length)
{
	if (tail.empty())
	{
		for (size_t i = 0; i < snake_length; i++)
		{
			tail.push_back({ i + 1, 1, 1});
		}

	}

	// setting snakes first position

	for (size_t i = 0; i < tail.size(); i++)
	{
		if (tail[i].right_left_down == 1)
		{
			tail[i].body_x++;
		}
		else if (tail[i].right_left_down == 2)
		{
			tail[i].body_x--;
		}
		else if (tail[i].right_left_down == 3)
		{
			tail[i].body_y++;
		}
	}

	// moving snake cords

	for (size_t i = 0; i < tail.size(); i++)
	{
		return tail[i];
	}

	// putting snake cords in screen
}

void snake::collide(size_t obs_cord_x, size_t obs_cord_y, size_t terrain_length_x, size_t terrain_length_y, size_t snake_length)
{
	terrain te;
	obstacle ob;

	if (!tail.empty())
	{
		for (size_t i = 0; i < snake_length; i++)
		{
			if (tail[i].body_x == terrain_length_x - 2)
			{
				if (tail[i].right_left_down == 1)
				{
					tail[i].right_left_down = 3;
				}
				else
				{
					tail[i].right_left_down = 2;
				}
			}
			////////
			else if (tail[i].body_x == 1)
			{
				if (tail[i].right_left_down == 2)
				{
					tail[i].right_left_down = 3;
				}
				else
				{
					tail[i].right_left_down = 1;
				}
			}
			////////
			else if (tail[i].right_left_down == 1 && tail[i].body_x == obs_cord_y - 1 && tail[i].body_y == obs_cord_x)
			{
				tail[i].route_reminder = tail[i].right_left_down;
				tail[i].right_left_down = 3;

			}
			////////
			else if (tail[i].right_left_down == 2 && tail[i].body_x == obs_cord_y + 1 && tail[i].body_y == obs_cord_x)
			{
				tail[i].route_reminder = tail[i].right_left_down;
				tail[i].right_left_down = 3;
			}
			////////
			else if (tail[i].right_left_down == 3)
			{
				if (tail[i].route_reminder == 1)
				{
					tail[i].right_left_down = 2;
				}
				else if (tail[i].route_reminder == 2)
				{
					tail[i].right_left_down = 1;
				}
			}
		}
	}
}

void snake::split(size_t bullet_cord_x, size_t bullet_cord_y)
{
	
}
