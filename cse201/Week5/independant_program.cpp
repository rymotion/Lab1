#include <iostream>
#include <cstdlib>
//this brings in the standrad C library
//pretty much you have to either look up what library bundles you need
//most IDEs like XCode and Android Studio have their own bundles included with the SDK and have a community that creates 
//bundles that you can use, but have to probably pay for.
//All of which you would have to read the documentation on how it would work, its syntax, and the functions built into it
#include <ctime>
//this is a library that allows and generates random keys (like Minecraft)
#include <stdio.h>
#include <string>//string library again
using namespace std;

int main()
{
  srand(time(0));//this would set the time key to 0 meaning that there is nothing there
  //srand would then take that and generate a key
  //not important to C++ cause you can read the documentation on this ctime library, but thought it would be intreseting to know
  string key;
  do
  {
    cout << "Press any button to roll for initiative. Type quit to kill program.";
    getline  (cin,key);
    //this gets the line a user inputs and sets it to key
    for (int i = 1; i != 2; i++)//another logical operator that means not equal to
        {//keep in mind that i++ and ++i are totally different 
          //why? i++ takes the initial value then increases the value once the block is done processing
          //++i just increases the value of i
          int y = rand() % 12;
          if (y <= 2)//the coding equivalent to greater than or equal to
            {
              cout << "You get to sit out for this round.";
            }
          if (y >= 3)//coding equivalent to less than or equal to
            {
              cout << "You used Magic Missile."<< endl;
              int c = rand() % 8;
              //everytime rand() is called it generates a random number
              if (c >= 5)
                {
                  cout << "You attacked the darkness." << endl;
                }
              else
                {
                  cout << "You attacked, but there is nothing to attack here." << endl;
                }
            }
          if (y == 12 && y != 6)//please note the difference between = and ==
            // = sets a value
            // == checks and compares the value
            {
              cout << "I got lazy so you got: " << y << endl;
            }
          cout << "You rolled " << y << " for this round."<< endl;
        }
  } while (key != "quit");//if the user were to type quit then the program would end
}
