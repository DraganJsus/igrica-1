#pragma once
#include "pch.h"
#include "snake.h"

class player
{
public:
	size_t cord_x;
	size_t cord_y;



	bool alive(size_t snake_position, size_t snake_length);
	void movement();
	void fire();

};

