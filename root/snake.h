#pragma once
#include "pch.h"
#include "weapon.h"
#include "terrain.h"
#include "obstacle.h"

class snake
{

	size_t position;
	size_t length;

public:

	void move();
	void collide(size_t obs_cord_x, size_t obs_cord_y, size_t terrain_length_x, size_t terrain_length_y);
	void split(size_t bullet_cord_x, size_t bullet_cord_y);

};

