
#include <iostream>
using namespace std;

int countTotalItems(int *items){
	int size = 17;
	int totalItems = 0;

	// use a loop to calculate totalScore
	for (int item = 0; item < size; ++item)
		if(items[item]<3 && items[item]>-1)
			totalItems++;

	return totalItems;
}

int main() {
	enum Item
	{
		HEALTH_POTION,
		TORCH,
		ARROW
	};

	int items[17] = {HEALTH_POTION, HEALTH_POTION, TORCH, TORCH, TORCH, TORCH, TORCH,
			ARROW, ARROW, ARROW, ARROW, ARROW, ARROW, ARROW, ARROW, ARROW, ARROW};

	cout << "Number of items: " << countTotalItems(items);

}
