#include "obstacle.h"
#include "pch.h"

size_t obstacle::position_x(size_t terrain_size_x)
{
	size_t rnd_x;
	
	srand(time(NULL));

	rnd_x = rand() % 2 + terrain_size_x;

	return rnd_x;
}

size_t obstacle::position_y(size_t terrain_size_y)
{
	size_t rnd_y;

	srand(time(NULL));

	rnd_y = rand() % 2 + terrain_size_y;

	return rnd_y;
}
