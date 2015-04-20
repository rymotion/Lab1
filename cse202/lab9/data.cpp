#include "data.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Data::Data(){
	vector <int> empty;
}
void Data::addData(int x){
	int c = x;
	data.push_back(c);
	cout << "New int added to vector.\n";

}
int Data::getSize(){
	int x = 0;
	for (int i = 0; i < data.size(); i++){
		x++;
	}
	cout << "Your vector is " << x << " integers large." << endl;
} 
bool Data::operator==(Data other) const{
		for (int i = 0; i < data.size(); i++){
			if (==){
				return true;
			}
		}
		return false;
	}
	// We want to check if the two Data objects are equal

// First get the two vectors - one using the this pointer and the other 
// can be obtained using the call theother.getData().

// Check if the two vectors have the same size - if not return false.

// Now check if both vectors have the same value - if you find a 
// mismatch, return false

// At this point the vectors have the same size and the same values 
} 
void Data::changeBenchmark(int newbenchmark){
	Data::benchmark = newbenchmark;
} // changes the static benchmark variable
vector <int> Data::getData() const{
	int x;
	for (int i = 0; i < data.size(); i++){
		 return data[i];
	}
} // returns the data vector;
int Data::getBenchmark() const{
	return benchmark;
} // returns the static benchmark;
void Data::rmData(int x){
	data.erase(data.end());
	cout << "Pervious data erased." << endl;	
}
void Data::deleteData(int x){
	data.erase(data.begin());
	cout << "All data erased." << endl;
}