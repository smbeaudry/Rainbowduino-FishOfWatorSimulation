/*
 Rainbowduino v3.0
 
 Runs a Fish of Wator simulation on the Rainbowduino 3D LED light cube.
 
 Steady colors:
 Green = 160000d
 Red = 
*/
 
#include <Rainbowduino.h>
 
 void setup()
{
  Rb.init(); //initialize Rainbowduino driver
}

//Blanks display
void clear() { Rb.blankDisplay(); }

//draws a pixel
void setPixel(int z, int x, int y, int color)
{
	if(x > 1)
		z = 3 - z;
		
	Rb.setPixelZXY(3-z,3-x,3-y,color);
}

void setPixel(int z, int x, int y, int r, int g, int b)
{
	if(x > 1)
		z = 3 - z;
		
	Rb.setPixelZXY(3-z,3-x,3-y,r,g,b);
}

/*
	This method sets up and laucnhes everything
*/
void play()
{
	//constants that affect the simulation
	//	change these to modify the behaviour of the simulation
	const int maxZXY = 3;
	const int sharkBreedRate = 5;
	const int fishBreedRate = 3;
	const int sharkStarve = 5;

	//environment variables
	enum Type { WATER = 0, FISH = 1, SHARK = 2};
	Type ocean[maxZXY][maxZXY][maxZXY];
	int breed[maxZXY][maxZXY][maxZXY];
	int starve[maxZXY][maxZXY][maxZXY];
	
	for(int z = 0; z <= maxZXY; z++)
	{
		for(int x = 0; x <= maxZXY; x++)
		{
			for(int y = 0; y <= maxZXY; y++)
			{
				ocean[z][x][y] = WATER;
				breed[z][x][y] = 0;
				starve[z][x][y] = 0;
			}
		}		
	}
	
	void move(Type ocean, int breed, int starve);
}

/*
	Provides move for fish and sharks
*/
void move(Type ocean, int breed, int starve)
{
	//creates an array of possible moves based on slot availability

	//makes random move
}

/*
	Activates when sharks meet fish
*/
void eat()
{

}

/*
	Fish and sharks breed
*/
void breed()
{

}