//So let's kick it up a notch we will now use the <string> library
#include <iostream>
#include <string>
//Now you may be asking why do you need it can't you use a string already in the source code?
//Well yes yes you can, but the string class is going to be used to store a string like an int and a double as shown thus far

using namespace std;

int main() {
  cout << "Give me a number, any number." << endl;
  double z;
  cin >> z;

  cout << "Give me another number." << endl;
  double x;
  cin >> x;

  cout << "Do you want to add, subtract, or find the average of these numbers?" << endl;
  cout << "Please use 1 for add, 2 for subtract, or 3 for average:" << endl;
  int selector;
  cin >> selector;

  if (selector == 1 || selector == getline(cin,"addition"/*This code hasn't been tested or fully compiled*/))
    {
      //Now this is new, this is an if condition
      //If conditions check to see if the condition (the stuff in the parenthesis) is true
      //Now what is this "||" that you see there? It's a logical operator.
      //this specific syntax is a "logical or operator" you will see many of them in the sample codes 
      //so what this does or what it's supposed to do is it checks what the user inputs to the computer if it is "1" OR "addition" then it
      //will process this block
       double result;
       result = (z+x);
       cout << "Here is your result" << " " << result << "." << endl;
    }
  if (selector == 2 || selector == getline(cin,"subtraction"))
    {
      //if the user were to input "2" or "subtraction" then it would process this block 
      //and so on...
       double result;
       result = (z-x);
       cout << "Here is your result" << " " << result << "." << endl;
    }
  if (selector == 3 || selector == getline(cin,"average"))
    {
        double result;
        result = (z+x)/2;
        cout << "Here is your result" << " " << result << "." << endl;
    }
    return 0
}
