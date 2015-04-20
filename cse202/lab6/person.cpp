 #include "person.h"
 #include <string>
  using namespace std; 

  Person::Person() {
    firstname = "";
    lastname = "";
    company = "";
  } // constructor
  Person::Person(string fname, string lname, string cname) {
    firstname = fname;
    lastname = lname;
    company = cname;
  }
  string Person::getFirstName() {
    return firstname;
  }
  string Person::getName() {
    string name;
    name = firstname + " " + lastname;
    return name;
  }
  string Person::getLastName() {
    return lastname;
  }
  string Person::getCompany() {
    return company;
  }