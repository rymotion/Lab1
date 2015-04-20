/* Program: circle.cpp */
/* Ryan Paglinawan
CSE 202 Lab 3
*/
#include "ccc_win.h"

// Project: lab3

class Chutist {
public:
	Chutist() {
		Point loc = Point(0,0);
	}
	// constructor of Chutist object at Point loc;
	Chutist(Point loc) {
	// code here
	double he_x = loc.get_x();
	double he_y = loc.get_y();
	}
	// accessor function: displays the chutist at location to the cwin
	void Chutist::move(int dx, int dy) {
		a.move(dx,dy);
		b.move(dx,dy);
		c.move(dx,dy);
		d.move(dx,dy);
	}
	void Chutist::display(bool i) const {
	// displays the chutist at the Point location.If i is negative the chute is closed. If i is positive, it is open.
		if (i = true){// chute if open
			cwin << Point chutist << Line(a,b) << Line(b,c) << Line(c,a);
			cwin << Message(Point(100,100), "Landing Success");
		}
		if (i = false){// chute is closed
			cwin << Point chutist;
		}
	}
private:
	Point loc;// location of chutist
	Point a;// These points -a,b,&c- are the
	Point b;// points used to generate the parachute
	Point c;// when active.
	Point d;// This is probably going to be the chutist IDK.
};
// the main program that will create the output display
int ccc_win_main() {
	// Speed of drop
	double vely = 0;
	double velx = 0;
	double hey = 1250;
	double hex = 1250;
	// Parachute
	int secondstoopen = 0;
	bool i = false;

	// spawns window and ball
	cwin.coord(0,1250,1250,0);
	Circle cball = Circle(Point loc, 10);
	cball.display();
	Triangle brake = Triangle(Point(0,0),Point(2,4),Point(4,0));
	brake.display(chute);
	// this does the speed and fall calculations
	while (height > 0) {
		vely += 32;
		velx += 16
		if (vely > 174) {
			vely = 174;
		}
		if (secondstoopen >= 5) {
			vely -= 100;
			velx -= 10;
			if (vely < 17){
				vely = 17;
				if (hey <= 0) {
					vely = 0;
					hey = 0;
				}
				velx = 0;
				i = true;
				cwin << Message(Point(300,100), "Landing Velocity:", y_velocity, x_velocity);
			}
		}
		hey -= vely;
		hex -= velx;
		// updates the window and graphics of ball dropping
		cball.move(hex,-hey);
		cball.display(i);
		brake.move(hex,-hey);
		brake.display(i);
		++secondstoopen;
		}
	return 0;
}
