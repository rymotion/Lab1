#include "person.h"
#include "staff.h"
#include "employee.h"
#include <string>
#include <vector>
using namespace std;
Staff::Staff(){
	position = " ";
}
Staff::Staff(string fname, string lname, string em, string ph, string room, double pay, string hired, string title)
	:Employee(fname, lname, em, ph, room, pay, hired){
		/*
			As previously mentioned the unused fname, lname, em, ph, room, pay, hired
			will be pushed from this class placed in Employee then fname, lname, em, ph
			will be pushed over again to Person and be processed just like faculty
			You can inherit as much as you want as often as you want

		*/
	position = title;
}
string Staff::getTitle() {
	return position;
}
string Staff::whatami(){
	return "I am a staff";
}
string Staff::getName(){
    return sname;
}