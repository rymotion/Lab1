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
		/*
			OK here is that special syntax I mentioned earlier
			the ":Person(fname, lname, em, ph)" after writing the
			Employee constructor and its parameters will take the unused
			fname, lname, em, ph strings and push them somewhere else
			in this case to the Person class to get stored/ processed 
			you will see this alot in each implementation/ source code in this project
		*/
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
	//this of course is a specific output 
	//each class will have its own function that does this 
	return "I am a employee";
}
string Employee::getName(){
	//realisticlly this actually does nothing since the 
	//sname string is not really stored or processed in this class
    return sname;
}