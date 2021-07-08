#include "player.h"

const size_t visina =25;

bool alive(size_t snake_position, size_t snake_length)
{
	return 0;
}

void movement(player player)
{
    while(kbhit())
    switch(getch())
	{
        case 97:player.cord_x--;break;
        case 100:player.cord_x++;;break;
    }
}

void fire(player player,weapon bullet,char &screen[][])
{
    if(getch()==107)
    {
        while(1)
        {
            draw();
            if(teren[i][j]=='.')
            {
                teren[i][j]=NULL;
            }
            if(j>=visina)
            {
                break;
                //dissapear();
            }
            j++;
            teren[i][j]='.';
            std::system( "cls" );
        }
    }
}
