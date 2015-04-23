//  Created by Ryan Paglinawan on 10/7/14.


#include <iostream>
using namespace std;


int main()
{
    cout << "How many pennies do you have?? ";
    int count;
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
