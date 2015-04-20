Test: test.o PasswordFile.o
	c++ test.o PasswordFile.o -o Test
test.o: test.cpp
	c++ -c test.cpp
PasswordFile.o: PasswordFile.cpp
	c++ -c PasswordFile.cpp