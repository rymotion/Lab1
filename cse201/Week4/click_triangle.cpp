// click_triangle.cpp
// user clicks three points on the canvas, and a triangle is drawn;

#include "Library/ccc_win.h"
#include "Library/Xlib.h"
#include "Library/ccc_shap.h"
using namespace std;

//well this is new.

//specifically this library will create a new window and run the program
// of course this is a graphics library and CSUSB has the correct graphical compiler

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
  //this would input the parameter to the Line() function which would take any int more
  //on function calls later will be later shown with classes

  return 0;
}
