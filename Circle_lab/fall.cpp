/* Program: circle.cpp */
/* Ryan Paglinawan
CSE 202 Lab 3
*/
#include "ccc_win.h"

// Project: lab3

class Chutist {
public:
	Chutist();  // Default constructor
	Chutist(Point loc);       // constructor where chutist always points up
	void display(int i) const;  // accessor function, displays chutist
	void move(int dx, int dy);  // mutator function, moves chutist
private:
	Point location; // location of chutist
};
// default;
Chutist::Chutist() {
	location = Point(0,0);
}
// constructor of Chutist object at Point loc;
Chutist::Chutist(Point loc) {
// code here
}
// accessor function: displays the chutist at location to the cwin
void Chutist::display(int i) const {
//displays the chutist at the Point location.If i is negative the chute is closed. If i is positive, it is open.
}
//the main program that will create the output display
int ccc_win_main() {

	//The height of the drop.
	int height = 1000;
	//Speed of drop
	double velocity = 0;
	double flight = 1250;
	//Parachute
	int secondstoopen;

	//spawns window and ball
	cwin.coord(0,1250,1250,0);
	Triangle chute = Triangle(Point(),Point(),Point());
	Circle chutist = Circle(Point(flight , height), 30);
	cwin << chutist << chute;

	//this does the speed and fall calculations
	while (height > 0) {
		velocity += 32;
		if (velocity > 174) {
			velocity = 174; }

		height -= velocity;

		if (flight < 1250) {
			flight -= velocity;
			return flight;
		}

		if (height < 500 ) {
			velocity -= 32;
			if (velocity < 100) {
				Line p = Line(Point(0,height), Point(flight,height));
				cwin << p;
				velocity -= 17;
			}
			height -= velocity;
			flight -= height;
			return height;
		}

		//updates the window and graphics of ball dropping
		cball.move(flight,-velocity);
		cwin << cball;

		return 0;
	}
}
