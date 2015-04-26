Test: test.o person.o student.o staff.o faculty.o employee.o
	c++ test.o person.o student.o staff.o faculty.o employee.o -o Test -v
test.o: test.cpp 
	c++ -c test.cpp
student.o: student.cpp person.cpp
	c++ -c student.cpp
faculty.o: faculty.cpp employee.cpp
	c++ -c faculty.cpp
employee.o: employee.cpp person.cpp
	c++ -c employee.cpp
staff.o: staff.cpp employee.cpp
	c++ -c staff.cpp
person.o: person.cpp
	c++ -c person.cpp

	/*
		If you want to compile please remove this
		cause I forgot the characters to indicate a comment

		anyways this is a makefile
		this will only compile using the c++ library and the compile only flag
		or -c as you see and create .o files those files will then be added together
		compiled one more time and rewritten as an executable with a particular name indicated
		after the -o flag

		please note the way to write this is as so

		-file/ item you want to create-: -ingredients- -additional_ingredients- (and so on) [enter key]
		[tabkey]	-library, method, flag, -ingredients- -additional_ingredients (if needed)- (and so on), additional_flags, etc
	*/