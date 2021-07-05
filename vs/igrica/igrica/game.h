#pragma once
#include "pch.h"
#include "player.h"
#include "snake.h"
#include "weapon.h"
#include "terrain.h"

class game
{

	std::vector<snake> snake_;

public:

	void draw();

};

