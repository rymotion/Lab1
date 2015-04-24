/* Program: circle.cpp */
/* Ryan Paglinawan
CSE 202 Lab 3
*/
#include "ccc_win.h"


class Chutist {
	public:
	// default;
	Chutist() {
		Point loc = Point(1250,1000);
	}

	// constructor of Chutist object at Point loc;
	Chutist(Point loc) {
		// code here
		double he_x = loc.get_x();
		double he_y = loc.get_y();
	}
	// accessor function: displays the chutist at location to the cwin
	void move(int dx, int dy) {
		a.move(dx,dy);
		b.move(dx,dy);
		c.move(dx,dy);
		d.move(dx,dy);
	}
	void display(bool chute) const {
		// displays the chutist at the Point location.If i is negative the chute is closed. If i is positive, it is open.
		if (chute == true){// chute if open
			cwin << Line(a,b);
			cwin << Line(b,c);
			cwin << Line(c,a);

			cwin << Message(Point(100,100), "Landing Success");
		} else {// chute is closed
			cwin << Chutist(Point);
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
	double vel_y = 0;
	double vel_x = 0;
	double flight = 1250;
	// Parachute
	int secondstoopen = 0;
	bool chute = false;

	// spawns window and ball
	cwin.coord(0,1250,1250,0);
	Circle cball = Chutist(Point loc, 10);
	cball.display();
	Triangle brake = Chute(Point(0,0),Point(2,4),Point(4,0));
	brake.display();
	// this does the speed and fall calculations
	while (height > 0) {
		vel_y += 32;
		vel_x += 16;
		
		if (vel_y > 174) {
			vel_y = 174;
		}
		if (secondstoopen >= 5) {
			vel_y -= 100;
			vel_x -= 10;
			if (vel_y < 17){
				vel_y = 17;
				vel_x = 0;
				chute = true;
				cwin << Message(Point(300,100), "Landing Velocity:", y_velocity);
			}
		}

		he_y -= vel_y;
		he_x -= vel_x;
		// updates the window and graphics of ball dropping
		cball.move(he_x,-he_y);
		cball.display();
		brake.move(he_x,-he_y);
		brake.display(chute);
		++secondstoopen;
		}
	return 0;
}
