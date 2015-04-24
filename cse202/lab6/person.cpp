#include "person.h"
#include <string>
using namespace std;

/*
  Yup so this is how you write the
  interface ans the functions of the program

  PLEASE NOTE: Make sure you have ALL the functions from the interface in here before trying to compile
  Anything made in the matching header file is what the compiler will look at, but it will not compile the code from the header
  Instead it would compile the stuff in here  
*/
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