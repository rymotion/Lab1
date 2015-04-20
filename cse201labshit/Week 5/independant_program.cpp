#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
  srand(time(0));
  string key;
  do
  {
    cout << "Press any button to roll for initiative. Type quit to kill program.";
    getline  (cin,key);


    for (int i = 1; i != 2; i++)
        {

          int y = rand() % 12;


          if (y <=2)
            {
              cout << "You get to sit out for this round.";
            }
          if (y >=3)
            {
              cout << "You used Magic Missile."<< endl;
              int c = rand() % 8;

              if (c >= 5)
                {
                  cout << "You attacked the darkness." << endl;
                }
              else
                {
                  cout << "You attacked, but there is nothing to attack here." << endl;
                }
            }
          if (y == 12 && y != 6)
            {
              cout << "I got lazy so you got: " << y << endl;
            }
          cout << "You rolled " << y << " for this round."<< endl;
        }


  } while (key != "quit");
}
