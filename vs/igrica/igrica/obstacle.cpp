#include "obstacle.h"
#include "pch.h"

size_t obstacle::position_x(size_t terrain_size_x)
{
	size_t rnd_x = 0;

	while (1 > 0)
	{
		srand(time(NULL));

		rnd_x = rand() % terrain_size_x;

		if (rnd_x > 1 && rnd_x < terrain_size_x - 2) break;
	}

	return rnd_x;
}

size_t obstacle::position_y(size_t terrain_size_y)
{
	size_t rnd_y = 0;

	while (1 > 0)
	{
		srand(time(NULL));

		rnd_y = rand() % terrain_size_y;

		if (rnd_y >= 3 && rnd_y < terrain_size_y - 4) break;
	}
	return rnd_y;
}
