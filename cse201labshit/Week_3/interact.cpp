#include <iostream>
#include <string>
using namespace std;

int main()
{
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

  if (selector == 1 || selector == getline(cin,"addition"))
    {
       double result;
       result = (z+x);
       cout << "Here is your result" << " " << result << "." << endl;
    }
  if (selector == 2 || selector == getline(cin,"subtraction"))
    {
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
