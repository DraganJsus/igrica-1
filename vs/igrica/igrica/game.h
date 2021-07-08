#pragma once
#include "pch.h"
#include "player.h"
#include "snake.h"
#include "weapon.h"
#include "terrain.h"
#define MAXN 100

class game
{

	std::vector<snake> snake_;

public:

	char screen[MAXN][MAXN];


	void set_grid(char screen[MAXN][MAXN], size_t size_x, size_t size_y);
	void draw(char screen[MAXN][MAXN], size_t size_x, size_t size_y, std::ostream& out);
	void input_values(size_t size_x, size_t size_y, size_t snake_size);

	

};

