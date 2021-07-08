#include "player.h"

bool alive(size_t snake_position, size_t snake_length)
{
	return 0;
}

void player::movement(player &player, size_t size_x, weapon bullets[])
{
    while (_kbhit())
        switch (_getch())
        {
        case 'a':
            if (player.cord_x > 1)
                player.cord_x--;

            break;
        case 'd':
            if (player.cord_x < size_x - 2)
                player.cord_x++;

        break;
        case 'k':
                player.fire(player, bullets);
        }
}

void player::fire(player& player, weapon bullets[])
{
             if (bullets[0].active == false)
             {
                 bullets[0].cord_x = player.cord_x;
                 bullets[0].cord_y = player.cord_y;
                 bullets[0].active = true;
             }
             else if (bullets[1].active == false)
             {
                 bullets[1].cord_x = player.cord_x;
                 bullets[1].cord_y = player.cord_y;
                 bullets[1].active = true;
             }
             else if (bullets[2].active == false)
             {
                 bullets[2].cord_x = player.cord_x;
                 bullets[2].cord_y = player.cord_y;
                 bullets[2].active = true;
             }
             else
             {
                 Beep(5000, 50000);
             }
        


    
}