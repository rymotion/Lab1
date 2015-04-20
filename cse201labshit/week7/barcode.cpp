// barcode.cpp
// by Kerstin Voigt, May 2009;
// program to solve Exercise P4.16 in Horstmann and Budd, p. 224;
// print out 5-digit zipcode as barcode;

// NO FUNCTIONS

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int zip;

  // enter zip code as 5-digit integer;

  cout << "Enter a zip code: ";
  cin >> zip;

  // validate; quit is zip is not 5-digit;

  if (zip < 10000 or zip > 99999)
    {
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

  // initialize string bar;
  // at the end of the program, bar will hold
  // a string of | and : symbols that make up
  // the barcode for the zip code;

  string bar = ""; // initialize to empty string;

  // all bar codes for d1 equal to 0,...9
  switch (d1)
    {
    case 0:
      bar = bar + "||:::";
      break;
    case 1:
      bar = bar + ":::||";
      break;
    case 2:
      bar = bar + "::|:|";
      break;
    case 3:
      bar = bar + "::||:";
      break;
    case 4:
      bar = bar + ":|::|";
      break;
    case 5:
      bar = bar + ":|:|:";
      break;
    case 6:
      bar = bar + ":||::";
      break;
    case 7:
      bar = bar + "|:::|";
      break;
    case 8:
      bar = bar + "|::|:";
      break;
    case 9:
      bar = bar + "|:|::";
      break;
    default:
      break;
    }

  // all bar codes for d2 equal to 0,...9

  switch (d2)
    {
    case 0:
      bar = bar + "||:::";
      break;
    case 1:
      bar = bar + ":::||";
      break;
    case 2:
      bar = bar + "::|:|";
      break;
    case 3:
      bar = bar + "::||:";
      break;
    case 4:
      bar = bar + ":|::|";
      break;
    case 5:
      bar = bar + ":|:|:";
      break;
    case 6:
      bar = bar + ":||::";
      break;
    case 7:
      bar = bar + "|:::|";
      break;
    case 8:
      bar = bar + "|::|:";
      break;
    case 9:
      bar = bar + "|:|::";
      break;
    default:
      break;
    }

  // all bar codes for d3 equal to 0,...9

  switch (d3)
    {
    case 0:
      bar = bar + "||:::";
      break;
    case 1:
      bar = bar + ":::||";
      break;
    case 2:
      bar = bar + "::|:|";
      break;
    case 3:
      bar = bar + "::||:";
      break;
    case 4:
      bar = bar + ":|::|";
      break;
    case 5:
      bar = bar + ":|:|:";
      break;
    case 6:
      bar = bar + ":||::";
      break;
    case 7:
      bar = bar + "|:::|";
      break;
    case 8:
      bar = bar + "|::|:";
      break;
    case 9:
      bar = bar + "|:|::";
      break;
    default:
      break;
    }
      
  // all bar codes for d4 equal to 0,...9

  switch (d4)
    {
    case 0:
      bar = bar + "||:::";
      break;
    case 1:
      bar = bar + ":::||";
      break;
    case 2:
      bar = bar + "::|:|";
      break;
    case 3:
      bar = bar + "::||:";
      break;
    case 4:
      bar = bar + ":|::|";
      break;
    case 5:
      bar = bar + ":|:|:";
      break;
    case 6:
      bar = bar + ":||::";
      break;
    case 7:
      bar = bar + "|:::|";
      break;
    case 8:
      bar = bar + "|::|:";
      break;
    case 9:
      bar = bar + "|:|::";
      break;
    default:
      break;
    }

  // all bar codes for d5 equal to 0,...9

  switch (d5)
    {
    case 0:
      bar = bar + "||:::";
      break;
    case 1:
      bar = bar + ":::||";
      break;
    case 2:
      bar = bar + "::|:|";
      break;
    case 3:
      bar = bar + "::||:";
      break;
    case 4:
      bar = bar + ":|::|";
      break;
    case 5:
      bar = bar + ":|:|:";
      break;
    case 6:
      bar = bar + ":||::";
      break;
    case 7:
      bar = bar + "|:::|";
      break;
    case 8:
      bar = bar + "|::|:";
      break;
    case 9:
      bar = bar + "|:|::";
      break;
    default:
      break;
    }

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

  // all bar codes for checkdigit equal to 0,...9

  switch (checkdigit)
    {
    case 0:
      bar = bar + "||:::";
      break;
    case 1:
      bar = bar + ":::||";
      break;
    case 2:
      bar = bar + "::|:|";
      break;
    case 3:
      bar = bar + "::||:";
      break;
    case 4:
      bar = bar + ":|::|";
      break;
    case 5:
      bar = bar + ":|:|:";
      break;
    case 6:
      bar = bar + ":||::";
      break;
    case 7:
      bar = bar + "|:::|";
      break;
    case 8:
      bar = bar + "|::|:";
      break;
    case 9:
      bar = bar + "|:|::";
      break;
    default:
      break;
    }

  // the final barcode is the barcode computed above with a 
  // framebar on either side;

  bar = "|" + bar + "|";

  cout << endl << endl;
  cout << "Your zip code of " << zip
       << " is " << bar << endl << endl;

  return 0;
}
