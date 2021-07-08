#pragma once
#include "pch.h"
#include "terrain.h"


class weapon
{
public:
    bool active;
	size_t cord_x;
	size_t cord_y;



	void dissapear(size_t terrain_cord_x, size_t terrain_cord_y);


};

