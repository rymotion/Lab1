// Class: CSE 330
// Term: Spring 2015
// Instructor: George M. Georgiou
// Name(s): Mbusi Hlatshwayo Ryan Paglinawan
// Lab 1
// Title: time 12
#include "time12.h"
#include "time24.h"
#include <iostream>

using namespace std;

time12::time12(hou,min,day){
	this -> hours = hou;
	this -> minutes = min;
	//this -> seconds = 0;
}
int time12::getHour(){

}
int time12::minutes(){

}
void int time12::convert(){

}
void addTime(tim){
	int temp = tim;

	int thou = temp / 60;
	int tmin = temp % 60;

	int newhou = thou + hours;
	int newmin = tmin + minutes;

	if (newhou > 12) {
		newhou = newhou - 12;
		if (day == "AM") {
			this -> day = "PM";
		}
		else {
			this -> day = "AM";
		}
	}
	time12::time12(newhou,newmin,day);
}
void time12::readTIme(){
	cout << "Current time is: " << hours << " " << minutes << " " << seconds << " " << day << endl; 
}