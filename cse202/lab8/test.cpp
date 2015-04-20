//Ryan Paglinawan
//Lab8
//object
#include "PasswordFile.h"
#include "UserPw.h"
//the stuff for the thing
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	//UserPw user(_user, password);

	PasswordFile passfile("password.txt");

	passfile.addpw(UserPw("dbotting","123qwe"));
	passfile.addpw(UserPw("egomez","qwerty"));
	passfile.addpw(UserPw("tongyu","liberty"));

	passfile.checkpw("dbotting","123qwe");
	passfile.checkpw("egomez","qwerty");
	passfile.checkpw("tongyu","liberty");

	passfile.printPw("out.txt");

}