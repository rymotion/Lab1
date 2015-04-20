#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Data {
	 public:
		 Data();
		 void addData(int x); // adds x to the data vector
		 int getSize(); //this will get the size of the data vector and return it.
		 bool operator==(Data other) const; //compares two Data objects for equality
		 static void changeBenchmark(int newbenchmark); // changes the static benchmark variable
		 vector <int> getData() const; // returns the data vector;
		 int getBenchmark() const; // returns the static benchmark;
		 void rmData(int x);
		 void deleteData(int x);
	 private:
		 vector <int> data;
		 static int benchmark;
};
#endif