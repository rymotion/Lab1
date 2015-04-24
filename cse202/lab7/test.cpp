//Ryan Paglinawan
//CSE 202
//lab7
/*
  Alright here is the fun one inheritance
*/
#include <string>
#include <iostream>

#include "person.h"
#include "employee.h"
#include "faculty.h"
#include "staff.h"
#include "student.h"
//look at all those header files am I right?
//You'll be jumping in between this and each of the different header files
//to get the full scale of what the hell is going on here 
using namespace std;

int main() {

	Person v = Person("Testfac","Testfaccaf","testem@test","123-456-7890");
  //for this go to the person.h and .cpp
  Faculty w = Faculty("Doctor", "Title");
  //the facility.h and .cpp
  Staff x = Staff("Current position");
  //satff.h and staff.cpp
  Student y = Student("Freshman");
  //student.h and .cpp
  Employee z = Employee("AAA 123", 50.00, "HIRED");
  //employee.h and .cpp

  cout << v.Person::getName() << " " << v.Person::getEmail() << " " << v.Person::getPhone() << endl;
  cout << w.Faculty::getRank() << " " << w.Faculty::getStatus() << endl;
  cout << x.Staff::getTitle() << endl;
  cout << y.Student::getStatus() << endl;
  cout << z.Employee::getOffice() << " " << z.Employee::getSalary() << " " << z.Employee::getDate() << endl;

}