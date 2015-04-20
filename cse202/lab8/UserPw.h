#ifndef USERPW_H
#define USERPW_H
#include <string>
#include <fstream>
#include <vector>
#include "PasswordFile.h"

using namespace std;

class UserPw {
 public:
 	UserPw();
	UserPw(string user, string password);//Constructor
	string GetUser(); // returns the user
	string GetPass();
	bool CheckPw(string user, string passwd); // returns true is user and password both match
 private:
	string user;
	string password;
};
#endif