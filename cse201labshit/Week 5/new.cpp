#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
  int x,n;
  string response;
  do{
    cout << "Do you want me to sort a number? Type yes to continue.\nType no to quit."<<endl;
    getline (cin,response);
    if (response == "yes")
      {
            cout << "Give me a number:" << endl;
            cin >> x;

            if (x < 0)
              {
                cout << "Your number is a negative." << endl;
                cout << "Your number is therefore not part of a perfect square." << endl;
              }
            else
              {
                cout << "Your number is positive." << endl;
                float y;
                y = sqrt(x);
                int n = static_cast<int>(y);
                n = pow(n,2);
                if (n!=x)
                  {
                    cout << "Your number " << x << " is not a perfect square." << endl;
                  }
                else
                  {
                    cout << "Your number " << x << " is a perfect square." << endl;

                      int half_1;
                      half_1 = x/2;

                      if (half_1*2 == x)
                        {
                          cout << "Your square is even." << endl;
                        }
                      else
                        {
                          cout << "Your square is odd." << endl;
                        }
                  }
                cout << "The square root of your number is: " << y << endl;
              }
            int half;
            half = x/2;

            if (half*2 == x)
              {
                cout << "Your number is even." << endl;
              }
            else
              {
                cout << "Your number is odd." << endl;
              }
            }

}while (response != "no");

  return 0;
}
