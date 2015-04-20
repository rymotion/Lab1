// click_triangle.cpp
// by Kerstin Voigt, April 2009; for lab4;
// user clicks three points on the canvas, and a triangle is drawn;

#include "Library/ccc_win.h"
#include <cmath>

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

  return 0;
}
