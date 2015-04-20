#include "Person.h"
    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
        Person t = Person("Bill", "Gates", "Microsoft");
    
        cout << t.getName() << endl;
        cout << t.getCompany() << endl;
    }