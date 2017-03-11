//============================================================================
// Name        : c6c2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>

struct Student{
	std::string name;
	int grade;
};

int main() {
	std::cout << "Enter number of students: ";
	int length;
	std::cin >> length;

	Student *array = new Student[length];

	for(int i = 0; i < length; i++){
		std::cout << "Enter name: ";
		std::cin >> array[i].name;
		std::cout << "Enter grade: ";
		std::cin >> array[i].grade;
	}


	delete[] array;
	array = 0;

	return 0;
}
