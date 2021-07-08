#pragma once
#include "pch.h"
#include"weapon.h"
#include"player.h"
#include"obstacle.h"
class obstacle;


struct obj
{
	size_t rand_x;
	size_t rand_y;
};
class terrain
{

public:

	size_t size_x;
	size_t size_y;
	std::vector<obj> obstacle_;
	
	
	void check(weapon bullets[]);

};

