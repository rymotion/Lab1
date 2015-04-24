//location test code
#include "location.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	//again the same thing you saw with the person class and test code
	Location t = Location("12345 AYYYY Street", "The dump", "1337");
	cout << t.getLocationAddress() << endl;
	cout << t.getLocationBuilding() << endl;
	cout << t.getLocationRoom() << endl;
}
