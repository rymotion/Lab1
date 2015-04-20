PersonTest: persontest.o person.o
	g++ persontest.o person.o -o PersonTest
    
person.o: person.cpp
	g++ -c person.cpp
    
persontest.o: persontest.cpp
	g++ -c persontest.cpp