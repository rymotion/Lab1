#include "person.h"
#include "faculty.h"
#include "employee.h"
#include <string>
#include <vector>
using namespace std;
Faculty::Faculty() {
	title = " ";
	status = " ";
}
Faculty::Faculty(string fname, string lname, string em, string ph, string room, double pay, string hired, string title, string position, string condition)
	:Employee(fname, lname, em, ph, room, pay, hired){
	title = position;
	status = condition;
}
string Faculty::getRank() {
	return title;
}
string Faculty::getStatus() {
	return status;
}
string Faculty::whatami(){
	return "I am faculty.";
}
string Faculty::getName(){
    return sname;
}