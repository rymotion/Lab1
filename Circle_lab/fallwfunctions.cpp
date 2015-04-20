/* Program: circle.cpp */
/* Ryan Paglinawan
CSE 202 Lab 2
*/
#include "ccc_win.h"
#include <ctime>

int secondstoopen(int height, double velocity, double flight);
//the main program that will create the output display
int ccc_win_main() {

	int height = 1000;
	double velocity = 0;
	double flight = 1250;

	int secondstoopen(1000,0,1250);

	//spawns window and ball
	cwin.coord(0,1250,1250,0);
	Circle obj = Circle(Point(flight , height), 30);
	cwin << obj;

	obj.move(secondstoopen(flight) , secondstoopen(-velocity));
	cwin << obj;

	return 0;
}
int secondstoopen(int height, double velocity, double flight) {

	//this does the speed and fall calculations

	while (height > 0) {
		velocity += 32;
		if (velocity > 174) {
			velocity = 174; }

			height -= velocity;

		if (height < 500 ) {
				velocity -= 32;
				if (velocity < 100) {
					Line para = Line(Point(0,obj.get_y()), Point(obj.get_x(),obj.get_y())
					velocity -= 17;
					cwin << para;
				}
				height -= velocity;

			return height;
		}
		if (flight == 1250) {
				flight -= 100;
				return flight;
		}

			return height;
	}
