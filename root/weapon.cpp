#include "weapon.h"

void dissapear(weapon &bullet)
{
bullet.active=false;
bullet.cord_x=NULL;
bullet.cord_y=NULL;
}

 /*  for(int i=0;i<3;i++)
    {
        if(bullets[i].active==true)
        {
            bullets[i].cord_y++;
        }
        if(bullets[i]==1)
        {
            dissapear(bullets[i]);
        }
    } */
