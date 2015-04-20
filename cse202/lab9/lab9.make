Test: test.o data.o
	c++ test.o data.o -o Test -v
data.o: data.cpp
	c++ -c data.cpp
test.o: test.cpp
	c++ -c test.cpp
