#include "terrain.h"
#include"weapon.h"
#include"player.h"
#include"obstacle.h"

void terrain::check(weapon bullets[])
{
	player player;
	for(int j=0;j<3;j++)
	{
		for (size_t i=0; i<obstacle_.size();i++)
        {
			if(obstacle_[i].rand_y==bullets[j].cord_x && obstacle_[i].rand_x==bullets[j].cord_y)
			{
				player.dissapear(bullets[j]);
			}
			
	     }
	}
}