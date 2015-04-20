// barcode.cpp
// by Kerstin Voigt, May 2009;
// program to solve Exercise P4.16 in Horstmann and Budd, p. 224;
// print out 5-digit zipcode as barcode;

// NO FUNCTIONS

#include <iostream>
#include <string>
using namespace std;
string digit_to_bars(int);
int checkdigit(int,int,int,int,int);
string barcode(int);
int main()
{
  int i = 1;
  do{
  int zip;

  // enter zip code as 5-digit integer;

  cout << "Enter a zip code: ";
  cin >> zip;

  // validate; quit if zip is not 5-digit;

  if (zip < 10000 or zip > 99999)
    {
      cout << "Invalid zip code" << endl;
      return 1;
    }

  cout << endl << endl;
  cout << "Your zip code of " << zip << " is " << barcode(zip) << endl << endl;

  return 0;
}while(i!=0);
{
  return 0;
}
}

string digit_to_bars(int dig)
{
  string bars;
//brings in the bars as strings that will later be placed out in text.
  switch (dig) //bars have switched to the place holder int dig
  {
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
  return bars; //returns bars aka dig
}
int checkdigit(int d1,int d2, int d3, int d4, int d5)
{
  /*
  This function brings in the five numbers from zip
  and varifies that
  the zipcode exists
  int cdig;
  */
  int cdig;
  int sum = d1 + d2 + d3 + d4 + d5;

  if( sum%10 == 0 )
    {
      cdig = 0;
    }

  else
    {
      cdig = ( 1 + sum/10 ) * 10 - sum;
    }

  return cdig;
  // returns the newly varified zipcode
}
string barcode(int zip)
{
  /*
    This function is so lame all it does is places bars on the end of barcodes
  */
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
  digit_to_bars(d5); // initialize to empty string;

  bar = bar + digit_to_bars(checkdigit(d1,d2,d3,d4,d5));

  bar = "|" + bar + "|";
  return bar;
}
