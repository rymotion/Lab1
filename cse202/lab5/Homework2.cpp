/*
  Ryan Paglinawan
  Lab 5/ Homework 2
  CSE 202
*/
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream> //this class is used to read your text file where the code is

using namespace std;

class Code {
public:
  Code();  // Default constructor - loads and uses morse code
  Code(vector <int> codewords);  // constructor loading customized code
  string encrypt(vector <char> message);  // encodes a message consisting of A-Z
  string decrypt(vector <string> message);  // decodes a message 
private:
  vector <string> codewords; // this is a codeword vector parallel to A-Z
  vector <char> alpha; // this is the vector A-Z
  vector <char>  alphacode(); // function builds the vector alpha - A B C etc.
  vector <string>  morsecode(); // function the vector codewords containing  morse code
  string encode(char x); //returns the codeword for the character x
  char decode(string c); //returns the character for the codeword c.
};
Code::Code(){
  this -> codewords = morsecode();
  this -> alpha = alphacode();
}
Code::Code(vector <int> codewords) {
  //this is blank
}

string Code::encrypt(vector <char> message) {
  string temp;
  for(int i = 0; i < message.size(); i++) {
    temp += encode(message[i]);
  }
  return temp;
}

string Code::decrypt(vector <string> message) {
  string temp;
  for(int i = 0; i < message.size(); i++) {
    temp += decode(message[i]);
  }
  return temp;
}

string Code::encode(char x) {
  char input = x;
  for (int i = 0; i < alpha.size(); i++) {
    if (alpha[i] == input) {
      cout << codewords[i];
    }
  }
}

char Code::decode(string c) {
  string input = c;
  for (int i = 0; i < codewords.size(); i++) {
    if (codewords[i] == input) {
      cout << alpha[i];
    }
  }
} 

vector <char> Code::alphacode(){// This returns a vector containing the alphabet a-z and " "
    vector <char> temp;
     for (char c = 'A'; c <= 'Z'; c++){
          temp.push_back(c);
        }
     temp.push_back(' ');
     temp.push_back('.');
     return temp;
    }

vector <string> Code::morsecode(){ // This function returns a vector containing the morse code
  vector<string>temp(28);
    temp[0] =".-";
    temp[1] ="-...";
    temp[2] ="-.-.";
    temp[3] ="-..";
    temp[4] =".";
    temp[5] ="..-.";
    temp[6] ="--.";
    temp[7] ="....";
    temp[8] ="..";
    temp[9] =".---";
    temp[10] ="-.-";
    temp[11] =".-..";
    temp[12] ="--";
    temp[13] ="-.";
    temp[14] ="---";
    temp[15] =".--.";
    temp[16] ="--.--";
    temp[17] =".-.";
    temp[18] ="...";
    temp[19] ="-";
    temp[20] ="..-";
    temp[21] ="...-";
    temp[22] =".--";
    temp[23] ="-..-";
    temp[24] ="-.--";
    temp[25] ="--..";
    temp[26] =".......";
    temp[27] ="x";
    return temp;
  }

int main() {
  // the main program objects
  fstream file;  // object for reading from a file
  fstream _file;
  Code c;
  string directory;
  char code1;
  string code2;
  vector <char> message1;
  vector <string> message2;

  cout << "Please make sure that your message is in text file, and are capital letters.\n" << endl;
  cout << "Where is your text file located?" << endl;
  cin >> directory;

  int _count = 0;
  fstream fin(directory, fstream::in | fstream::out);
  while (fin >> noskipws >> code1) {
    message1.push_back(code1);
    file >> code1;
    _count ++;
  }

  cout << "Encoded, your message is: " << c.encrypt(message1) << endl;
  file.close();

  return 0;
}