#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include <string>
#include <vector>
using namespace std;
class Student: public Person {
	public:
		Student();
		Student(string fname, string lname, string em, string ph, string grade);
		string getStatus();
		string whatami();
		string getName();
	private:
		string sname;
		string status;
};
#endif 