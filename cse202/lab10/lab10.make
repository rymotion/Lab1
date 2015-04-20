Test: test.o template.o
	c++ test.o template.o -o Test
test.o: test.cpp
	c++ -c test.cpp
template.o: template.cpp
	c++ -c template.cpp