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
		bool head;
	};

	//size_t length = 7;

	std::vector <body_cords> tail;

public:

	void move(size_t right_left_down);
	void collide(size_t obs_cord_x, size_t obs_cord_y, size_t terrain_length_x, size_t terrain_length_y);
	void split(size_t bullet_cord_x, size_t bullet_cord_y);

};