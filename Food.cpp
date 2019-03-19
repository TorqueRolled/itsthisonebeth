/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for food class. Provides info on this game
 *				space through the event function.
 ***********************************************************************/

#include "Food.hpp"
#include <iostream>

using std::cout;
using std::endl;

//Note that this space is what the user is started on. However, the player
//will not find food in this room upon game starting. They will however,
//find the food in this room should they leave, and then return to it. 
void Food::event(int pType, Pack& backpack, int& time)
{
	//This food space simply tries to add food to the backpack.
	//The pack class will not allow added food if the pack already has
	//a full capacity of 1 food in it. 
	if (!completed) {
		cout << endl;
		cout << "You found some food!" << endl;
		backpack.addFood();
		time -= 1;
		completed = true;
	}

	//Appears upon the second time entering this room. 
	else {
		cout << endl;
		cout << "This room appears to be empty." << endl;
		time -= 1;
	}
}