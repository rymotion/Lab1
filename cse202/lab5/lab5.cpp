/*
  Ryan Paglinawan
  Lab 5/ Homework 2
  CSE 202
*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream> //this class is used to read your text file where the code is

using namespace std;

class Code {
public: 
  Code();  // Default constructor - loads and uses morse code
  string decode(vector <string> message);  // decodes a message
private:
  vector <string> codewords; // this is a codeword vector parallel to A-Z
  vector <char> alpha; // this is the vector for A-Z
  vector <char> alphacode(); // function builds the vector alpha - A B C etc.
  vector <string> morsecode(); // function builds the vector codewords containing morse code
  char decode(string c); //returns the character for the codeword c.
};

Code::Code(){
  this -> codewords = morsecode();
  this -> alpha = alphacode();
}

string Code::decode(vector <string> message){
  string temp;
  for(int i = 0; i < message.size(); i++) {
    temp += decode(message[i]);
  }
  return temp;
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
  vector<string> message1;//this is going to be the morsecode file input
  string code1;
  fstream inFile;
  string directory;
  Code c;
  cout << "Please make sure that your encrypted message is a text file." << endl;
  cout << endl;
  cout << "Where is your text file located?" << endl;
  cin >> directory;

  int _count = 0;
  //read a file until you reach the end
  fstream fin(directory, fstream::in | fstream::out);
  while (fin >> code1) {
    message1.push_back(code1);
    inFile >> code1;
    _count ++;
  }
  inFile.close();
  cout << "Decoded, your message is: " << c.decode(message1) << endl;
  return 0;
}
