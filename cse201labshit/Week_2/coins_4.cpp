//  Created by Ryan Paglinawan on 10/7/14.
//
//  Please note that all these examples will be looking at the C++ Library

#include <iostream>
using namespace std;
//  So for starters no matter what language you use, you have to almost always
//  have to have an include or an import method of some sort
//  the "using namespace std" is the lazy way to avoid doing iostream:cin or
//  iostream:cout etc. most languages do this automatically, others not so much, so you'll
//  have to look at the documentation of the language.

int main() {
    cout << "How many pennies do you have?? ";
    /*  
        For C++ in general you will have special characters such as the "<<"" or "">>
        that you will see throughout the examples you will be seeing
        these chacters will act as an input type method or an output method
        you can figure out which is which based on what is going on in the code
        as for other parts of the code you will see characters  like "//" or
        a set like this /* */
    /*
        These are chacters that omit parts of the code that is known as comments
        all languages have them and it's all similar
    */
    int count;
    //When declaring variable types most languages will require you to do it this way
    //or other languages will use the var typename to declare it
    //These are known as primitive data types, there are others which you will see
    //through out the code repository
    cin >> count;
    double total = count * 0.01;
    
    cout << "how many nickels do you have? ";
    cin >> count;
    total = count * 0.05 + total;
    
    cout << " How many dimes do you have? ";
    cin >> count;
    total = count * 0.10 +total;
    
    cout << " How many quarters do you have? ";
    cin >> count;
    total = count * 0.25 + total;
    
    cout << " How many dollar(s) do you have? ";
    cin >> count;
    total = count * 1.00 + total;

    cout << endl;
    cout << "You have "<< (int) total << " dollars ";
    cout << "and " << (total - (int) total) * 100 << " cents. Congrats.";
    cout << endl;
    
    return 0; // return 0 is end of program tells OS that program runs.
}
