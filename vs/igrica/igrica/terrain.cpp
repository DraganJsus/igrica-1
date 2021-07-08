#include "terrain.h"

void terrain::check(weapon &bullets[], player &player)
{
	for(int j=0;j<3;j++)
	{
		for (size_t i=0; i<obstacle_.size();i++)
        {
			if(obstacle_[i].size_x==bullets[j].cord_x && obstacle_[i].size_y==bullets[j]_cord_y-1)
			{
				player.dissapear(bullet[j]);
			}
			
	     }
	}
}