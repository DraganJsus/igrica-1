#pragma once
#include "pch.h"
#include "snake.h"

class player
{

	size_t cord_x;
	size_t cord_y;

public:

	bool alive(size_t snake_position, size_t snake_length);
	void move();
	void fire();

};

