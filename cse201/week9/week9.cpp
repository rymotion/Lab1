#include <iostream>
#include <cstdlib>
using namespace std;
/*
  Basic class building 
*/
int gcf(int a, int b) {
  /*
  checks if b is equal to zero
  also generates greatest common factor
  returns it
  */
  if (b == 0) return a;
  return gcf(b, a % b);
}

class Fraction { // this right here is a class declaration 
 /* 
    In a class declaration you have a few things public private and protected.
    Also classes can be written seperatly, this will be shown in later examples 
  */
 public: // When a function is declared public that allows for the program it is linked to call the function and modify
  Fraction(int a, int b) { //the int a and int b declaration are parameters for the function in the class
    /*
    checks if a and b are negative and if b = 0
    sets a and b as numerator and denomonator
    */
    if (a < 0) {
      cout << "The numerator can't be negative." << endl;
      a = 0;
    }
    if (b <= 0) {
      cout << "The denominator must be positive." << endl;
      b = 1;
    }

    numer = a;
    denom = b;
  }

  int get_numer() {
    return numer;
  }

  int get_denom() {
    return denom;
  }

  void normalize() {
    int g = gcf(numer, denom);
    numer = numer / g;
    denom = denom / g;
  }

  Fraction operator+(Fraction adduend) {//this is the code block of how fractions get added together in this program
    int a1 = numer;
    int b1 = denom;
    int a2 = adduend.get_numer();
    int b2 = adduend.get_denom();
    int top = (a1 * b2) + (a2 * b1);
    int bottom = b1 * b2;
    Fraction result(top, bottom);
    result.normalize();
    return result;
  }

  void print() {
    cout << numer << "/" << denom << endl;
  }

 private: // In a private declaration of a class these are winthheld and can only be modified in the class itself
  int numer;
  int denom;
  //for "protected:" well it's protected from modification in general from the program and the class declarations
};


int main() {
  int a;
  int b;

  cout << "Enter the numerator and denominator of your first fraction: ";
  cin >> a >> b;
  Fraction frac1(a, b);//this will take inputs of int a and int b into the Faction oject class

  cout << "Enter the numerator and denominator of your second fraction: ";
  cin >> a >> b;
  Fraction frac2(a, b);

  cout << "These are the normalized versions." << endl;
  frac1.normalize();//since frac1 is a Fraction object, it can use the function calls like this to go therough the function code block
  frac1.print();//So frac1 will now be printed out
  frac2.normalize();//frac2 will be processed 
  frac2.print();//and so on, you will see this happen more on as you dive deeper into this

  Fraction frac3 = frac1 + frac2;
  //this code here uses the operator+ function
  //yes you can actually make custom operators if you need to
  //cool right?

  cout << "Added together is: ";
  frac3.print();

  return 0;
}
