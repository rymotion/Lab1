//Ryan Paglinawan
//CSE 202
//Homework 3
#include <string>
#include <iostream>
#include <vector>
//Oh also vector class stuff
/*
  Forgot to metion vectors and arrays opps so yes you have both a vector and array as an object that stores stuff in it
  for a vector you have to call in the vector library
  and you create one by doing this 
      vector <-datatype-> name
  and an array like
      a[-size-]
  or something like that
  anyways vectors have no definate size and arrays do that's the difference in a nutshell
*/
/*
  Here is the inheratance stuff that i'm talking about
*/

#include "person.h"
#include "employee.h"
#include "faculty.h"
#include "staff.h"
#include "student.h"

using namespace std;

int main() {
// This will show you how to use vectors and pointers with polymorphism

   vector<Person*> v;//the * at the end of Person is acually a pointer object that creates a vector of Person that points to v
   v.push_back(new Person("John Adams","Boston","617-555-0000","john@adams.com"));
   //push_back() creates a new Person and pushes the vector back to make space for the new value that was made
   v.push_back(new Student("John Quincy Adams","Boston","617-555-0000","johnq@adams.com","senior"));
   //the "new" keyword well does what it says makes a new object 
   v.push_back(new Staff("Samuel Adams","Boston","617-555-BEER","sam@adams.com","brewhouse 1",1000,"9-15-1764","Brewer"));
   v.push_back(new Faculty("Nick Cage","Cage", "00N-ICK-CAGE", "Nick@Nick.cage", "THE BEES", 6425, "2-24-31", "Actor", "Actor", "NickCage"));

   for (int i = 0; i < v.size(); i++)
     {//this is a for loop which goes through the size of the vector
       cout << v[i] -> Person::getName() << "  "<< v[i] -> whatami() << endl;
       //when doing this in a vector or even in an array [i] is the spot the program will look in
       //vectors and arrays start at index 0 and go up to the last index i in this case 4 objects (or index three) since "i" is set to initial index 0 or the first object being:
       //v.push_back(new Person("John Adams","Boston","617-555-0000","john@adams.com"));

       //what the statement here does is it outputs at index i of vector v the person's name and what they are
       //The beauty of this is that it is 100% inherited
       //again I will go more in-depth in the header and code for the header files 

       //of course you are wondering how do we put this all together?
       //easy, a Makefile
     }

   return 1;
}