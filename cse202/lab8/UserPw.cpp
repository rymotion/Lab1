#include "PasswordFile.h"
#include "UserPw.h"//this is going to be an object
#include <string>
#include <fstream>
#include <vector>
using namespace std;
UserPw::UserPw() {
	user = " ";
	password = " ";
}
UserPw::UserPw(string user, string password){
	this -> user = user;
	this -> password = password;

}//Constructor
string UserPw::GetUser(){
	return user;
} // returns the user
string UserPw::GetPass(){
	return password;
}
bool UserPw::CheckPw(string user, string passwd){
	if (user == this -> user && passwd == this-> password){
		return true;
	}
	else {
		return false;
	}
} // returns true is user and password both match
