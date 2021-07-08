#pragma once
#include "pch.h"
#include "weapon.h"
#include "terrain.h"
#include "obstacle.h"

class snake
{

	struct body_cords
	{
		size_t body_x;
		size_t body_y;
		size_t right_left_down;
		size_t route_reminder;
	};

public:

	std::vector <body_cords> tail;

	body_cords move(size_t snake_length);
	void collide(size_t obs_cord_x, size_t obs_cord_y, size_t terrain_length_x, size_t terrain_length_y, size_t snake_length);
	void split(size_t bullet_cord_x, size_t bullet_cord_y);

};