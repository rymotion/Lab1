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