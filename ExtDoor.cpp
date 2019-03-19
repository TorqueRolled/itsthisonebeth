/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for extDoor class. Provides info on this game 
 *				space through the event function.
 ***********************************************************************/

#include "ExtDoor.hpp"
#include <iostream>

using std::cout;
using std::endl;

void ExtDoor::event(int player, Pack& bpack, int& time)
{
	//Text for when the player gets to exit space but doesnt not have the
	//vial objective in thier pack
	if (bpack.getZombaway() == 0) {
		cout << endl;
		cout << "You've found the exit, but you still need to find the" << endl;
		cout << "vial of Zombaway before you can leave." << endl;
		time -= 1;
	}

	//Display for winning condition. Occurs when user reaches this exit space
	//with the vial in pack, within the time given. 
	else {
		cout << endl;
		cout << "You make your way out of the warehouse and locate the" << endl;
		cout << "medic station. They administer the Zombaway before you" << endl;
		cout << "turn." << endl;
		cout << endl;
		cout << "CONGRATULATIONS! YOU WON!" << endl;
		cout << endl;
		completed = true;
	}
}