#include "snake.h"

struct body_cords
{
	size_t body_x;
	size_t body_y;
	bool head;
};

size_t right_left_down = 1;

std::vector <body_cords> tail;

snake::body_cords snake::move(size_t snake_length)
{
	if (tail.empty())
	{
		for (size_t i = 0; i < snake_length - 1; i++)
		{
			tail.push_back({ i + 1, 1, false });
		}

		tail.push_back({ snake_length, 1, true });
	}

	// setting snakes first position

	for (size_t i = 0; i < tail.size(); i++)
	{
		if (right_left_down == 1)
		{
			
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

	for (size_t i = 0; i < snake_length; i++)
	{
		if (tail[i].head)
		{
			if (tail[i].body_x == te.size_x - 1)
			{
				if (right_left_down == 1)
					right_left_down = 3;
				else
					right_left_down = 2;
			}

			else if (tail[i].body_x == ob.position_x(terrain_length_x) && tail[i].body_y == ob.position_y(terrain_length_y))
			{			
				right_left_down = 3;			
			}
		}		
	}
}

void snake::split(size_t bullet_cord_x, size_t bullet_cord_y)
{
	
}
