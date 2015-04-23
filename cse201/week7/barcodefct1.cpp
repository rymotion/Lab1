// barcodefct1.cpp
// by Kerstin Voigt, May 2009;
// program to solve Exercise P4.16 in Horstmann and Budd, p. 224;
// print out 5-digit zipcode as barcode;

// USING FUNCTIONS;

#include <iostream>
#include <string>
using namespace std;

string digit_to_bars(int);

int main() {
  int zip;

  // enter zip code as 5-digit integer;

  cout << "Enter a zip code: ";
  cin >> zip;

  // validate; quit is zip is not 5-digit;

  if (zip < 10000 or zip > 99999) {
      cout << "Invalid zip code";
      return 1;
    }

  // extract individual digits from zip code;

  int d1,d2,d3,d4,d5;

  int rest = zip;
  d1 = rest / 10000;
  rest = rest % 10000;
  d2 = rest / 1000;
  rest = rest % 1000;
  d3 = rest / 100;
  rest = rest % 100;
  d4 = rest / 10;
  d5 = rest % 10;

  string bar = digit_to_bars(d1) +
               digit_to_bars(d2) +
               digit_to_bars(d3) +
               digit_to_bars(d4) +
               digit_to_bars(d5);

  // computing the checkdigit: compute sum of all zip code digits;
  // if the sum is a multiple of 10, then the checkdigit is 0;
  // otherwise, subtract sum from the smallest multiple of 10 that
  // is greater than sum; this will be value 1,...9;

  int checkdigit;
  int sum = d1 + d2 + d3 + d4 + d5;

  if (sum % 10 == 0)
    checkdigit = 0;
  else
    checkdigit = (1 + sum/10) * 10 - sum;

  // add checkdigit;
  bar = bar + digit_to_bars(checkdigit);

  // the final barcode is the barcode computed above with a
  // framebar on either side;

  bar = "|" + bar + "|";

  cout << endl << endl;
  cout << "Your zip code of " << zip
       << " is " << bar << endl << endl;

  return 0;
}


// convert digit into corresponding barcode;

string digit_to_bars (int dig) {
  string bars;

  switch (dig) {
    case 0:
      bars = "||:::";
      break;
    case 1:
      bars = ":::||";
      break;
    case 2:
      bars = "::|:|";
      break;
    case 3:
      bars = "::||:";
      break;
    case 4:
      bars = ":|::|";
      break;
    case 5:
      bars = ":|:|:";
      break;
    case 6:
      bars = ":||::";
      break;
    case 7:
      bars = "|:::|";
      break;
    case 8:
      bars = "|::|:";
      break;
    case 9:
      bars = "|:|::";
      break;
    default:
      break;
    }

      return bars;
}
