/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for pack class. Used as the player's backpack.
 *				'Holds' food and vial in game for objectiives. Also
 *				provides the eat food function. 
 ***********************************************************************/

#include "Pack.hpp"
#include <iostream>

using std::cout;
using std::endl;

//Construct pack with no contents
Pack::Pack()
{
	food = 0;
	zombaway = 0;
}

void Pack::addZombaway()
{
	zombaway = 1;
}

int Pack::getZombaway()
{
	return zombaway;
}

int Pack::getFood()
{
	return food;
}

//This function is called by the Food Class space. Max capacity is 1. If food 
//is already held, then the message displays saying that youre full. 
void Pack::addFood()
{
	if (food == 1) {
		cout << "Unfortunately, you do not have room to hold aditional food." << endl;
	}
	else {
		food += 1;
		cout << "You have added the food to your pack." << endl;
	}
}

//This function is provided as an option to the user within the game if they have 
//a food item in their backpack. Beneficial food adds 2 mintues to in game clock.
//Contaminated food reduces clock by 1 minute. 
void Pack::eatFood(int type, int& time)
{
	if (food == 0) {
		cout << "You do not have any food to eat." << endl;
	}
	
	else {
		food -= 1;
		cout << endl;
		cout << "You remove the food you found from your pack, and eat it..." << endl;

		//The Lucky character type has 66% chance of eating beneficial food
		if (type == 1) {
			int chance = rand() % 3 + 1;
			if (chance > 1) {
				time += 2;
				cout << "You feel amazing! The food has allowed you to fight off" << endl;
				cout << "the zombie virus for an additional two minutes." << endl;
			}
			else {
				time -= 1;
				cout << "The food was bad! You can feel the virus getting stronger." << endl;
				cout << "You are now one mintue closer to being zombified!" << endl;
			}
		}

		//Other characters only have 25% chance of eating beneficial food
		else {
			int chance = rand() % 4 + 1;
			if (chance == 4) {
				time += 2;
				cout << "You feel amazing! The food has allowed you to fight off" << endl;
				cout << "the zombie virus for an additional two minutes." << endl;
			}
			else {
				time -= 1;
				cout << "The food was bad! You can feel the virus getting stronger." << endl;
				cout << "You are now one mintue closer to being zombified!" << endl;
			}
		}
	}
}
