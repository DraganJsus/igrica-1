#pragma once
#include "pch.h"
#include "terrain.h"


class weapon
{

	size_t cord_x;
	size_t cord_y;
	size_t speed;
	size_t bullet_counter;

public:

	void dissapear(size_t terrain_cord_x, size_t terrain_cord_y);
	bool allow_to_shot(size_t b_counter);

};

