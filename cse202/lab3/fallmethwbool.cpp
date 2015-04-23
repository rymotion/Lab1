/* Program: circle.cpp */
/* Ryan Paglinawan
CSE 202 Homework
*/
#include "ccc_win.h"

// Project: Homework

class Chutist {
public:
	Chutist();
	Chutist(Point loc);
	void move(double dx, double dy);
	void display(bool i) const;
private:
	Point location;// location of chutist
	Point a;// These points -a,b,&c- are the
	Point b;// points used to generate the parachute
	Point c;// when active.
	Point d;//the point that creates circle
	Circle per;
};
Chutist::Chutist() {
		Point loc = Point(0,0);
	}
	// constructor of Chutist object at Point loc;
	Chutist::Chutist(Point loc) {
	//chutist
	this->location = loc;
	int chutx = loc.get_x();
	int chuty = loc.get_y();
	Point z = Point(chutx,chuty);
	Circle person = Circle(loc , 10);
	this-> per = person;
	//parachute
	int parax = loc.get_x();
	int paray = loc.get_y();
	Point w = Point(parax - 10 , paray);
	Point x = Point(parax , paray + 10);
	Point y = Point(parax + 10 , paray);
	this-> a = w;
	this-> b = x;
	this-> c = y;
	this-> d = z;
	}
	// accessor function: displays the chutist at location to the cwin
	void Chutist::move(double dx, double dy) {
		a.move(dx,dy);
		b.move(dx,dy);
		c.move(dx,dy);
		d.move(dx,dy);
	}
	void Chutist::display(bool i) const {
	// displays the chutist at the Point location.If i is negative the chute is closed. If i is positive, it is open.
	if (i == true){// chute if open
			//display chute and landing message
			cwin << Line(a,b);
			cwin << Line(b,c);
			cwin << Line(c,a);
			cwin << Message(Point(625,100), "Landing Success");
		}
			Circle per = Circle(Point(d),10);
			cwin << per;
	}
// the main program that will create the output display
int ccc_win_main() {
	// Speed of drop
	double vely = cwin;
	double velx = 0;
	double hey =  cwin.get_int("Enter height of the plane from the ground: ");
	double hex =  cwin.get_int("Enter the distance the plane is at: ");
	double t =  cwin.get_int("Time until the chute punches out: ");
	// Parachute
	int secondstoopen = 0;
	bool i = false;
	if (hey > 1250 || hey <= 0) {
		hey = 1250;
		if (hex > 1250 || hex <= 0) {
			hex = 1250;
		}
		cwin << Message(Point(625,625), "Huehuehue fixed it to default.");
	}
	// spawns window and ball
	cwin.coord(0,1250,1250,0);
	Chutist jump = Chutist(Point(hex,hey));
	jump.display(i);
	while (hey > 0 || i == false) {
	vely += 32;
	velx += 16;
	if (vely > 174) {
		vely = 174;
	}
	if (secondstoopen >= t) {
		vely -= 100;
		velx -= 10;
		if (vely < 17){
			vely = 17;
			velx = 0;
			if (hey <= 0) {
				vely = 0;
				hey = 0;
			}
			if (hey <= 0) {
				cwin << Message(Point(725,100), "You killed the parachutist. *slow clap*");
			}
			i = true;
		}
	}
	hey -= vely;
	hex -= velx;
	++secondstoopen;
	jump.move(hex,-vely);
	jump.display(i);
	}
return 0;
}
