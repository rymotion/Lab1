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

time12::time12(hou,min,day):time24(hou,min){
	this -> hours = hou;
	this -> minutes = min;
	//this -> seconds = 0;
}
void time12::addTime(){

}
void time12::readTime(){

}
void time12::writeTime(){

}
