#include "person.h"
#include "employee.h"
#include <string>
#include <vector>
using namespace std;
Employee::Employee(){
	office = " ";
	salary = 0;
	date = " ";
}
Employee::Employee(string fname, string lname, string em, string ph, string room, double pay, string hired)
	:Person(fname, lname, em, ph){
	office = room;
	salary = pay;
	date = hired;
}
string Employee::getOffice() {
	return office;
}
double Employee::getSalary() {
	return salary;
}
string Employee::getDate(){
	return date;
}
string Employee::whatami(){
	return "I am a employee";
}
string Employee::getName(){
    return sname;
}