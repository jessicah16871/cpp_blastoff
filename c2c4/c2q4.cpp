//============================================================================
// Name        : c2q4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "constants.h"


double getHeight()
{
	std:: cout << "Enter the initial height of the tower in meters:";
	double init;
	cin >> init;
	return init;
}

double currentHeight(double init, int time)
{
	double distanceFallen = (Constants::gravity * time * time)/2;
	return init - distanceFallen;
}

void print(double height, int time)
{
	if (height > 0.0)
		std::cout << "At " << time << " seconds, the ball is at height: " << height << " meters" << endl;
	else
		std::cout << "At " << time << " seconds, the ball is on the ground";
}

void printCurrent(double init, int time)
{
	print(currentHeight(init, time), time);
}

int main() {
	double height = getHeight();

	printCurrent(height, 0);
	printCurrent(height, 1);
	printCurrent(height, 2);
	printCurrent(height, 3);
	printCurrent(height, 4);
	printCurrent(height, 5);
}
