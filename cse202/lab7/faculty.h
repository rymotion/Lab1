#ifndef FACULTY_H
#define FACULTY_H
#include "person.h"
#include "employee.h"
#include <string>
#include <vector>
using namespace std;
class Faculty: public Employee {
	public:
		Faculty();
		Faculty(string fname, string lname, string em, string ph, string room, double pay, string hired, string title, string position, string condition);
		string getRank();
		string getStatus();
		string whatami();
		string getName();
	private:
		string sname;
		string title;
		string status;
};
#endif