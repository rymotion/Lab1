//  Created by Ryan Paglinawan on 10/7/14.
//
//  Please note that all these examples will be looking at the C++ Library
//  Java again is similar, but the syntax for the header will be different

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
    //The ">>" and "<<" symbols work as a mean to input and output through various keywords
    //"cin" is used as a way for input on these programs and will read up the press of the enter/return key
    double total = count * 0.01;
    //Double is another primitive data keyword this allows for decimals to atleast two decimal spaces
    //float another primitive data value allows even more decimal places and is primarily used over 
    //both int and double you will see more primitive data values as you continue through these old programs
    
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

    cout << endl;//The endl keyword works as a return key and creates a new line 
    //another like it is \n that will do the same thing, but it can only be used inside a string
    cout << "You have "<< (int) total << " dollars ";//The paranthesis make total which is a double have the property of an int
    cout << "and " << (total - (int) total) * 100 << " cents. Congrats.";
    cout << endl;
    
    return 0; // return 0 is end of program tells OS that program runs.
}
