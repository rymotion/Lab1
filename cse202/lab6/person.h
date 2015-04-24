//lab6
//Ryan Paglinawan
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

/*
    See what did I tell you? This is a class declaration AKA header files.
    A header file is what you add to a class or to your main program and it carries things like how the class works (or should work),
    thw functions (also known as the interface of the class), and any variables specific to the class. 
*/

class Person {
    /*
        So as you see here this is a basic person class why programmers make seperate files 
        such as these (cause they actually will be ignored by the compiler [in some languages])
        is cause one thing, WE ARE LAZY. Also it takes time to keep rebuilding the same class and interface,
        as well as why rewrite it when you can just copy and paste the same stuff, but modify it a litte?
        (You will actually see that as you continue)

        Now look at the matching person.cpp file for this particular lab
    */
    public:
        Person();
        Person(string fname, string lname, string cname);
        string getFirstName();
        string getName();
        string getLastName();
        string getCompany();
    private:
        string firstname;
        string lastname;
        string company; 
    }; // Person
#endif