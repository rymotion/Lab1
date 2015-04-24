#include "location.h"
#include <string>
using namespace std;

Location::Location(){
	address = "";
	building = "";
	room = "";
	//pretty much the same thing that was with the Person class
}
Location::Location(string addr, string bldg, string rm){
	address = addr;
	building = bldg;
	room = rm;
}
string Location::getLocationAddress(){
	return address;
}
string Location::getLocationBuilding(){
	return building;
}
string Location::getLocationRoom(){
	return room;
}