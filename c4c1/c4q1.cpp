
#include <iostream>
using namespace std;
#include <string>

enum Type
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster
{
	Type type;
	std::string name;
	int health;
};

std::string getType(Monster monster){
	if(monster.type == OGRE)
		return "Ogre";
	if(monster.type == DRAGON)
			return "Dragon";
	if(monster.type == ORC)
			return "Orc";
	if(monster.type == GIANT_SPIDER)
			return "Giant Spider";
	if(monster.type == SLIME)
			return "Slime";

}


void printMonster(Monster monster){
	std::cout << "This " << getType(monster);
	std::cout << " is named "<< monster.name<< " and has " << monster.health << " health." << endl;
}

int main() {

	Monster Torg = { OGRE, "Torg", 145 };
	Monster Blurp = { SLIME, "Blurp", 23 };

	printMonster(Torg);
	printMonster(Blurp);

	return 0;
}

