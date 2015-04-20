// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s): Mbusi Hlatshwayo Ryan Paglinawan
// Lab 1
// Title: time 12
//#include "time12.h"
//#include "time24.h"
#include <iostream>

using namespace std;

int main(){
  time12 t(8,15,AM);
  t.writeTime();
  t.readTime(); //Input 12:00 PM
  t.addTime(180); // add 3 hours to t
  t.writeTime();
  time12 t1(8,15,PM);
  t1.writeTime();
  t1.readTime(); //Input 12:00 PM
  t1.addTime(180); // add 3 hours to t
  t1.writeTime();
}