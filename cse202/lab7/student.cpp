#include "person.h"
#include "student.h"
#include <string>
#include <vector>
using namespace std;
Student::Student(){
	status = " ";
}
Student::Student(string fname, string lname, string em, string ph, string grade):Person(fname, lname, em, ph){
	status = grade;
}
string Student::getStatus(){
	return status;
}
string Student::whatami(){
	return "I am a student";
}
string Student::getName(){
    return sname;
}