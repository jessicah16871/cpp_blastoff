//============================================================================
// Name        : c5q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int readGuess(int num) {
	int guess;
	std::cout << "Guess #" << num << ": ";
	std::cin >> guess;
	return guess;
}

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

bool printResult(int guess, int num){
	if (guess > num)
	{
		std::cout << "Your guess is too high!"<< endl;
		return false;
	}
	else if (num > guess)
	{
		std::cout << "Your guess is too low!"<< endl;
		return false;
	}
	else
	{
		std::cout << "Correct! You win!"<< endl;
		return true;
	}
}

int main() {

	srand(static_cast<unsigned int>(time(0)));

	bool won = false;
	bool play = true;
	int rand;

	std::cout << "Let's play a game.  I'm thinking of a number.  "
			"You have 7 tries to guess what it is." << endl;
	while(play){
		getRandomNumber(1, 100);
		rand = getRandomNumber(1, 100);

		for(int i = 1; i < 8; i++){
			int num = readGuess(i);
			if(printResult(num, rand)){
				won = true;
				break;
			}
		}

		if(!won){
			std::cout << "Sorry, you lose.  The correct number was " << rand << endl;
		}

		char ans;
		do
		{
			std::cout << "Would you like to play again (y/n)? ";
			std::cin >> ans;
		} while (ans != 'y' && ans != 'n');

		play = ans == 'y'? true: false;
	}
	return 0;
}
