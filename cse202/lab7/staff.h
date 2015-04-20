#ifndef STAFF_H
#define STAFF_H
#include "employee.h"
#include <string>
#include <vector>
using namespace std;
class Staff: public Employee {
	public:
		Staff();
		Staff(string fname, string lname, string em, string ph, string room, double pay, string hired, string title);
		string getTitle();
		string whatami();
		string getName();
	private:
		string sname;
		string position;
};
#endif