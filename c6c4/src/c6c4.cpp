//============================================================================
// Name        : c6c4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char string[] = "Hello, World!";
	int count = 0;

	while(string[count] != '\0'){
		std::cout << string[count];
		count++;
	}

	return 0;
}

