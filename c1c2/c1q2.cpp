//============================================================================
// Name        : c1q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int readNumber();
void writeNumber(int x);

int main() {
	cout << "Enter number: " << endl;
	int x = readNumber();
	cout << "Enter number: " << endl;
	int y = readNumber();

	writeNumber(x+y);
}
