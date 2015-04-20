// click_triangle.cpp
// by Kerstin Voigt, April 2009; for lab4;
// user clicks three points on the canvas, and a triangle is drawn;

#include "ccc_win.h"
#include <cmath>
#include "Xlib.h"
#include "ccc_shap.h"

using namespace std;

int ccc_win_main()
{
  // create and display a message;
  Message dowhat(Point(7,9),"Click three times to create a triangle ...");
  cwin << dowhat;

  // get three points from the user;
  Point p1 = cwin.get_mouse("");
  Point p2 = cwin.get_mouse("");
  Point p3 = cwin.get_mouse("");

  // draw the three sides of the triangle;
  cwin << Line(p1,p2) << Line(p2,p3) << Line(p3,p1);
  double angle = cwin.get_double("Angle of rotation [0-360]: ");
  angle = angle *3.14/180; //convert from degrees to radians;

  double rp1x = p1.get_x() * cos(angle) - p1.get_y() *sin(angle);
  double rp1y = p1.get_x() *sin(angle) + p1.get_y() *cos(angle);
  Point rp1(rp1x,rp1y);

   double rp2x = p2.get_x() * cos(angle) - p2.get_y() *sin(angle);
  double rp2y = p2.get_x() *sin(angle) + p2.get_y() *cos(angle);
  Point rp2(rp2x,rp2y);
  
   double rp3x = p3.get_x() * cos(angle) - p3.get_y() *sin(angle);
  double rp3y = p3.get_x() *sin(angle) +  p3.get_y() *cos(angle);
  Point rp3(rp3x,rp3y);

cwin << Line(rp1,rp2) << Line(rp2,rp3) << Line(rp3,rp1);

  

  return 0;
}
