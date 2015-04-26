//lab7
//Ryan Paglinawan
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
using namespace std;
//This is the class that other classes will be inheriting from
class Person {
    public:
        Person();
        Person(string fname, string lname, string em, string ph);
        string getFirstName();
        virtual string getName();
        //what this allows the program to do is for other classes to have this 
        //function and create this function without the program going haywire on it
        //because you can't have the same function calls with the same name
        //adding virtual infront of the data type/ function name allows for this to happen
        //Please also note that the virtual keyword is only required within the class declaraion
        //not the source code/ implementation file for the class
        string getLastName();
        string getEmail();
        string getPhone();
        virtual string whatami();
    private:
        string firstname;
        string lastname;
        string email;
        string phone; 
}; // Person
#endif