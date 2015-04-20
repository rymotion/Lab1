//Ryan Paglinawan
//CSE 202
//lab7
#include <string>
#include <iostream>

#include "person.h"
#include "employee.h"
#include "faculty.h"
#include "staff.h"
#include "student.h"

using namespace std;

int main() {

	Person v = Person("Testfac","Testfaccaf","testem@test","123-456-7890");
  Faculty w = Faculty("Doctor", "Title");
  Staff x = Staff("Current position");
  Student y = Student("Freshman");
  Employee z = Employee("AAA 123", 50.00, "HIRED");

  cout << v.Person::getName() << " " << v.Person::getEmail() << " " << v.Person::getPhone() << endl;
  cout << w.Faculty::getRank() << " " << w.Faculty::getStatus() << endl;
  cout << x.Staff::getTitle() << endl;
  cout << y.Student::getStatus() << endl;
  cout << z.Employee::getOffice() << " " << z.Employee::getSalary() << " " << z.Employee::getDate() << endl;

}