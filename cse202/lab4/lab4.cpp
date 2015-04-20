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

void get(string askfor, int numchars, string input);
void get_password(string name, string pwd);

int main() {
    //  Change these character arrays to strings.

  string name;
  string pwd;
  string passwd;
  cout << "Address of name =" <<  &name <<"\n";
  cout << "Address of pwd =" <<  &pwd <<"\n";
  cout << "Address of passwd =" <<  &passwd <<"\n";

  bool authenticated = false;
  if (authenticated == false) {

                // input the name here
    get("Name", 7, name);
                // get the password pwd for the name
    get_password(name, pwd);
               // input a password passwd
    get("Password", 7, passwd);

    cout << pwd << " vs " << passwd << endl;
                // compare the two passwords
    authenticated = !strncmp(pwd,passwd,7);

    else if(authenticated == false)
      cout << "Please try again\n";
  } else {
    cout << "Welcome "<< name <<"\n";
  }
  return 0;
}
void get(string askfor, int numchars, string input) {
  cout << askfor << "(" << numchars << " characters): ";
  getline(cin,input);
  return;
}
void get_password(string * name, string * pwd) {

  if(strcmp(name,"botting")){
    pwd = "123456";
  }
  else if(strcmp(name,"ernesto")){
    pwd = "765432";
  }
  else if(strcmp(name,"tong")) {
    pwd = "234567";
  }
  else {
    pwd = "qwert";
  }
  return;
}
