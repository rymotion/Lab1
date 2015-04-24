#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
    
    int main() {
        Person t = Person("Bill", "Gates", "Microsoft");
        //This is going to be the parameters that will be processed through the Person class
    
        cout << t.getName() << endl;
        cout << t.getCompany() << endl;
    }