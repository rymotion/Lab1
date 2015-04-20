//lab7
//Ryan Paglinawan
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
using namespace std;
class Person {
    public:
        Person();
        Person(string fname, string lname, string em, string ph);
        string getFirstName();
        virtual string getName();
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