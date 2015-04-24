//lab6
//Ryan Paglinawan
#ifndef LOCATION_H
#define LOCATION_H
//again I'm horrible at keeping tabs of whether or not I wrote it in the comments
//but class declarations in a header file in C++ always starts with 
/*
    #ifndef -classname_H-
    #define -classname_H-

    and end with

    #endif

    everything with coding has an open and a close statement (or a pair if you want to see it that way)
*/
#include <string>
using namespace std; 
class Location {
    public:
        Location();
        Location(string addr, string bldg, string rm);
        string getLocationAddress();
        string getLocationBuilding();
        string getLocationRoom();
    private:
        string address;
        string building;
        string room;
}; // Location
#endif