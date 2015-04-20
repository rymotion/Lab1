/*
  Ryan Paglinawan cse201. I forgot to write my name when i first submitted it in.
  fixed it now.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int gcf(int a, int b) {
  /*
  checks if b is equal to zero
  also generates greatest common factor
  returns it
  */
  if (b == 0) return a;
  return gcf(b, a % b);
}

class Fraction {
 public:
  Fraction(int a, int b) {
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

  Fraction operator+(Fraction adduend) {
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

 private:
  int numer;
  int denom;
};


int main() {
  int a;
  int b;

  cout << "Enter the numerator and denominator of your first fraction: ";
  cin >> a >> b;
  Fraction frac1(a, b);

  cout << "Enter the numerator and denominator of your second fraction: ";
  cin >> a >> b;
  Fraction frac2(a, b);

  cout << "These are the normalized versions." << endl;
  frac1.normalize();
  frac1.print();
  frac2.normalize();
  frac2.print();

  Fraction frac3 = frac1 + frac2;
  cout << "Added together is: ";
  frac3.print();

  return 0;
}
