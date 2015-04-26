#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"
#include <string>
#include <vector>
using namespace std;
class Employee: public Person {
	//here we have the first class derived in a way from the Person class
	//within the heirarchy
	//this is also the way to call your public funtions directly from the Person class
	public:
		Employee();
		Employee(string fname, string lname, string em, string ph, string room, double pay, string hired);
		//There is some special sytax for this code in particular but it is only required in the source code/ implemetation file
		string getOffice();
		double getSalary();
		string getDate();
		//these functions below look familiar?
		string whatami();
		string getName();
	private:
		string sname;
		string office;
		double salary;
		string date;
};
#endif