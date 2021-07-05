#include "player.h"

const size_t visina =25;
/*
bool alive(size_t snake_position, size_t snake_length)
{
	return 0;
}

void movement(char &teren[i][j])
{
    while(kbhit())
    switch(getch())
	{
        case 97:teren[i-1][j]='w';teren[i][j]=NULL;break;
        case 100:teren[i+1][j]='w';teren[i][j]=NULL;break;
    }
}

void fire(char &teren[i][j])
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
