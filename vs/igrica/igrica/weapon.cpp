#include "weapon.h"


void weapon::dissapear(weapon &bullet)
{
bullet.active=false;
bullet.cord_x=NULL;
bullet.cord_y=NULL;
}