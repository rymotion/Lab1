// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s): Mbusi Hlatshwayo Ryan Paglinawan
// Lab 1
// Title: time 12

#include "time12.h"
#include "time24.h"
#include <iostream>
#include <iomanip>

#include "d_except.h"

using namespace std;

int main(){
  time24 t(08,15,AM);
  t.writeTime();
  t.readTime(); //Input 12:00 PM
  t.addTime(180); // add 3 hours to t
  t.writeTime();
  t.readTime();

  time12 t1(08,15,PM);
  t1.writeTime();
  t1.readTime(); //Input 12:00 PM
  t1.addTime(180); // add 3 hours to t
  t1.writeTime();
  t1.readTime();
}