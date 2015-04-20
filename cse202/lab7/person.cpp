#include "person.h"
#include <string>
#include <vector>
  using namespace std; 
  Person::Person(){
    firstname = " ";
    lastname = " ";
    email = " ";
    phone = " ";
  }
  Person::Person(string fname, string lname, string em, string ph) {
    this -> firstname = fname;
    this -> lastname = lname;
    email = em;
    phone = ph;
  }
  string Person::getFirstName() {
    return firstname;
  }
  string Person::getName() {
    string sname;
    sname = firstname + " " + lastname;
    return sname;
  }
  string Person::getLastName() {
    return lastname;
  }
  string Person::getEmail() {
    return email;
  }
  string Person::getPhone() {
    return phone;
  }
  string Person::whatami(){

    return "I am a person";
  }