/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for lockdoor class. Provides info on this game
 *				space through the event function.
 ***********************************************************************/

#include "LockDoor.hpp"
#include <limits>
#include <iostream>

using std::cout;
using std::endl;

void LockDoor::event(int type, Pack& backpack, int& time)
{
	//Display when the user enters a locked room
	if (!completed) {
		cout << endl;
		cout << "As you enter the room, you hear the door lock behind you. You" << endl;
		cout << "quickly find that all other doors are also locked. You have no" << endl;
		cout << "choice but to try and pick the locks. This will take at least" << endl;
		cout << "one minute to do, and your attempt may fail." << endl;

		
		//Theif character has 80% chance of picking the lock 
		if (type == 2) {
			while (!completed) {
				int chance = rand() % 10 + 1;
				if (chance > 2) {
					time -= 1;
					cout << endl;
					cout << "You try your luck at one of the locks, and after one" << endl;
					cout << "minute, you hear a 'click'. You now know how to unlock" << endl;
					cout << "the doors in this room." << endl;
					completed = true;
				}
				else {
					time -= 1;
					cout << endl;
					cout << "One minute passes and you still can't get the hang of the" << endl;
					cout << "locks in this room." << endl;
					cout << endl;
					cout << "Press Enter to try again...";
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cin.get();
				}
			}
		}

		//Other characters only have 40% chance of picking the lock
		else {
			while (!completed) {
				int chance = rand() % 10 + 1;
				if (chance > 6) {
					time -= 1;
					cout << endl;
					cout << "You try your luck at one of the locks, and after one minute," << endl;
					cout << "you hear a 'click'. You now know how to unlock the doors in" << endl;
					cout << "this room." << endl;
					completed = true;
				}
				else {
					time -= 1;
					cout << endl;
					cout << "One minute passes and you still can't get the hang of the" << endl;
					cout << "locks in this room." << endl;
					cout << endl;
					cout << "Press Enter to try again...";
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cin.get();
				}
			}
		}
	}

	//Appears upon the second time entering this room. 
	else {
		cout << endl;
		cout << "This room appears to be empty." << endl;
		time -= 1;
	}
}