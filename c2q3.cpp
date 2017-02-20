//============================================================================
// Name        : c2q3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double readNumber()
{
	double x;
	cin >> x;
	return x;

}

char readOperation()
{
	char x;
	cin >> x;
	return x;

}

void print(double x, double y, char o)
{
	if(o == '+')
		std::cout << x << " + "<< y << " = " << x+y ;
	else if(o == '-')
		std::cout << x << " - "<< y << " = " << x-y;
	else if(o == '*')
		std::cout << x << " * "<< y << " = " << x*y;
	else if(o == '/')
		std::cout << x << " / "<< y << " = " << x/y;
}

int main() {
	cout << "Enter a double value" << endl;
	double x = readNumber();
	cout << "Enter a second double value" << endl;
	double y = readNumber();
	cout << "Enter one of the following: +, -, *, or /: *" << endl;
	char o = readOperation();

	print(x,y,o);
}
