/*Ryan Paglinawan
  CSE 202
  Lab 4
*/
#include <cassert>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <curses.h>

using namespace std;

void get(string askfor, int numchars, string &input);
void get_password(string name, string &word);

int main() {
    //  Change these character arrays to strings.
  string name = " "; string word = " "; string passwd = " ";
  cout << "Address of name =" <<  &name <<"\n";
  cout << "Address of pwd =" <<  &word <<"\n";
  cout << "Address of passwd =" <<  &passwd <<"\n";

  bool authenticated = false;
  while (! authenticated) {
                // input the name here
    get("Name", 7, name);
                // get the password pwd for the name
    get_password(name, word);
               // input a password passwd
    get("Password", 7, passwd);
                // compare the two passwords
      if(passwd == word) {
        authenticated = true;
      }
      if(!authenticated) {
        cout << "Please try again\n";
      }
  }
  cout << "Welcome" << name <<"\n";
  return 0;
  }
void get(string askfor, int numchars, string &input) {
  cout<<askfor<<"("<<numchars<<" characters): ";
  cin>>input;
  return;
}
void get_password(string name, string &word) {

  if(name == "botting"){
    word = "123456";
  }
  else if(name == "ernesto"){
    word = "765432";
  }
  else if(name == "tong"){
    word = "234567";
  }
  else {
    word = "qwert";
  }
  return;
}
