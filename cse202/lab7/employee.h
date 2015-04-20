#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"
#include <string>
#include <vector>
using namespace std;
class Employee: public Person {
	public:
		Employee();
		Employee(string fname, string lname, string em, string ph, string room, double pay, string hired);
		string getOffice();
		double getSalary();
		string getDate();
		string whatami();
		string getName();
	private:
		string sname;
		string office;
		double salary;
		string date;
};
#endif