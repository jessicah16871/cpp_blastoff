//============================================================================
// Name        : c1q1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int readNumber()
{
	int x;
	cin >> x;
	return x;
}

void writeNumber(int x)
{
	cout << x << endl;
}

int main()
{
	cout << "Enter number: " << endl;
	int x = readNumber();
	cout << "Enter number: " << endl;
	int y = readNumber();

	writeNumber(x+y);
}
