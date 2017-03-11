/*
 * c6c3.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: jessicahong
 */
#include <iostream>
using namespace std;


void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){

	int x = 1;
	int y = 2;
	std::cout << "Value of x: " << x << std::endl;
	std::cout << "Value of y: " << y << std::endl;

	swap(x,y);

	std::cout << "Value of x: " << x << std::endl;
	std::cout << "Value of y: " << y << std::endl;

	return 0;
}
