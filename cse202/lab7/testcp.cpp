//Ryan Paglinawan
//CSE 202
//Homework 3
#include <string>
#include <iostream>
#include <vector>
//#include <>

#include "person.h"
#include "employee.h"
#include "faculty.h"
#include "staff.h"
#include "student.h"

using namespace std;

int main() {
// This will show you how to use vectors and pointers with polymorphism
// You may have to make some changes to match your code ....
   vector<Person*> v;
   //vector<Person*> v;
   v.push_back(new Person("John Adams","Boston","617-555-0000","john@adams.com"));
   v.push_back(new Student("John Quincy Adams","Boston","617-555-0000","johnq@adams.com","senior"));
   v.push_back(new Staff("Samuel Adams","Boston","617-555-BEER","sam@adams.com","brewhouse 1",1000,"9-15-1764","Brewer"));
   v.push_back(new Faculty("Nick Cage","Cage", "00N-ICK-CAGE", "Nick@Nick.cage", "THE BEES", 6425, "2-24-31", "Actor", "Actor", "NickCage"));

   for (int i = 0; i < v.size(); i++)
     {
       cout << v[i] -> Person::getName() << "  "<< v[i] -> whatami() << endl;
       //<< v[i] getName() << "  "
     }

   return 1;
}