Time: time12.o time24.o Lab1.o
		c++ time12.o time24.o Lab1.o
Lab1.o: Lab1.cpp
		c++ -c Lab1.cpp
time12.o:
		c++ -c time12.cpp
time24.o:
		c++ -c time24.cpp