LocationTest: locationtest.o location.o
	g++ locationtest.o location.o -o LocationTest

location.o: location.cpp
	g++ -c location.cpp

locationtest.o: locationtest.cpp
	g++ -c locationtest.cpp