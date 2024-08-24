#include<stdio.h>

// define, scale and transform a polygon 

int main(){
	typedef struct Point{
		int x;
		int y;
	}point;
	
	typedef struct Polygon{
		int sides;
		int lenght;
		int width;
		int scale_by;
		point edge;
	}polygon;
	
	polygon rectangle;

	rectangle.sides = 4;
	rectangle.lenght = 10;
	rectangle.width = 20;

	rectangle.edge.x = rectangle.edge.y = 0; //point 1
	rectangle.edge.x += rectangle.lenght;	
	
}
