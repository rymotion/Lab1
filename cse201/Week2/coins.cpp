//  Created by Ryan Paglinawan on 10/7/14.
//
//

#include <iostream>
using namespace std;
// this program is used to count coins as you would count in real life.
//
//it's c out not cout.
//
//
//
//

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
    
    cout << endl;
cout << "You have "<< total <<". Congrats.";
    cout << endl;
    
    return 0; // return 0 is end of program tells OS that program runs.
}
