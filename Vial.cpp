/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for extDoor class. Provides info on this game
 *				space through the event function.
 ***********************************************************************/

#include "Vial.hpp"
#include <iostream>

using std::cout;
using std::endl;

void Vial::event(int player, Pack& bpack, int& time)
{
	//Adds vial to the backpack upon user entering room. Positioned in the
	//SW corner room. 
	if (!completed) {
		cout << endl;
		cout << "You've found a vial of Zombaway!" << endl;
		cout << "Now find the exit and get to the medics!" << endl;
		bpack.addZombaway();
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
