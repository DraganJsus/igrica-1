#pragma once
#include "pch.h"
#include "terrain.h"


class obstacle : public terrain
{

	/*struct obj
	{
		size_t rand_x;
		size_t rand_y;
	};*/

public:

	size_t position_x(size_t terrain_size_x);
	size_t position_y(size_t terrain_size_y);

};

