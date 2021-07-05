#pragma once
#include "pch.h"
class obstacle;

class terrain
{

public:

	size_t size_x;
	size_t size_y;
	std::vector<obstacle*> obstacle_;

};

