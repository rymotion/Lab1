//Ryan Paglinawan
//CSE 202
//Lab 10
template<typename T>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	Mlist <int> test1 = Mlist<int>() ;
	test1.add(5);
	test1.add(7);
	test1.add(4);
	test1.remove(7);
	cout << test1.front()<< endl;
	cout << test1.back()<< endl;
	
	Mlist <string> test2 = Mlist<string>() ;
	test2.add("John");
	test2.add("Paul");
	test2.add("Mary");
	test2.add("Kate");
	test2.remove("Paul");
	cout << test2.front()<< endl;
	cout << test2.back()<< endl;
}