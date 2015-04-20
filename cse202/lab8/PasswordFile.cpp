
#include <string>
#include <fstream>
#include <vector>
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
class PasswordFile : public UserPw{
 public:
	 PasswordFile(string filename);// opens the file and reads the names/passwords in the vector entry
	 vector <UserPw> getFile(); // returns the vector entry 
	 void addpw(UserPw newentry); //this adds a new user/password to entry and writes entry to the file filename
	 bool checkpw(string user, string passwd); // returns true is user exists and password matches\
	 fstream printPw(string filename);
 private:
	 string filename; // the file that contains password information
	 vector <UserPw> entry; // the list of usernames/passwords
};
PasswordFile::PasswordFile(string filename){
	string _user;
	string pass;

	fstream _file(filename, ios::in);

	while (_file >> _user >> skipws >> pass){
		entry.push_UserPw(_user, pass);
	}
	_file.close();
}// opens the file and reads the names/passwords in the vector entry
vector <UserPw> PasswordFile::getFile(){
	return entry;
} // returns the vector entry 
void PasswordFile::addpw(UserPw newentry){
	entry.push_back(newentry);
} //this adds a new user/password to entry and writes entry to the file filename
bool PasswordFile::checkpw(string user, string passwd){
	for(int i = 0; i < entry.size(); i++){
		if (entry[i].CheckPw(user, passwd) == true){
			return true;
		}
	}
	return false;
} // returns true if user exists and password matches
fstream PasswordFile::printPw(string filename){
	ofstream file;
	file.open(filename);
	for (int i = 0; i < entry.size(); i++){
		file << entry[i].GetUser() << entry[i].GetPass()<< endl;
	}
	file.close();
}//print out the entry vector
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
