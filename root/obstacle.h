#pragma once
#include "pch.h"
#include "terrain.h"


class obstacle : public terrain
{

public:

	void position(size_t terrain_size_x, size_t terrain_size_y);

};

