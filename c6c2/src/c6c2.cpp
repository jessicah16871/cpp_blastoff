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

void sort(Student *array, int len){
	const int length = len;

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
		{
			int biggestIndex = startIndex;

			for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
			{

				if (array[currentIndex].grade > array[biggestIndex].grade)
					biggestIndex = currentIndex;
			}

			std::swap(array[startIndex], array[biggestIndex]);
		}

}

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

	sort(array,length);

	for(int i = 0; i < length; i++){
		std::cout << array[i].name << " got the grade of " <<  array[i].grade << std::endl;
	}

	delete[] array;
	array = 0;

	return 0;
}
