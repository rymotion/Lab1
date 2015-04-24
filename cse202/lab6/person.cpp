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
    //Again our program will have parameters that will act as an input to create an object

    //This will pretty much be the standard for all class constructors FYI
    //This will also set it to the private declarations in memory that can be called with the getter methods
    firstname = fname;
    lastname = lname;
    company = cname;
  }
  string Person::getFirstName() {//an example of the getter method
    return firstname;
    /*
      Oh I'm not sure if this was mentioned earlier
      the function string Person::getFirstName() the
      variable tag string is what will be the assumed return object
      now this can be changed with whatever you want it to be
      (int, double, bool, float, or any class object you want returned [An example of this will appear later probably, 
      I didn't memorize the contents of the folder but you'll know it when you see it])
    */
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