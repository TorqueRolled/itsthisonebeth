/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: main file for final project. Admins a text base game
 *				where user has to make their way through 9 grid square
 *				'warehouse' to find cure for zombie virus. Has step limit
 *				of ten which may increase if they eat food. Win condition
 *				is them finding a vial, then making it to the exit. 
 ***********************************************************************/

#include "menu.hpp"
#include "Game.hpp"
#include <iostream>
#include <limits>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Program into and instructions
	cout << endl;
	cout << endl;
	cout << "10 MINUTES" << endl;
	cout << "-------------------------------------" << endl;
	cout << "A game of courage, fate, and ZOMBIES." << endl;
	cout << "Created by Jake Theander, 2019." << endl;
	cout << endl;
	cout << "Press Enter to proceed...";
	cin.get();

	cout << endl;
	cout << "You cringe as its teeth sink into your skin, but the only" << endl;
	cout << "thing that stings more than the bite, is knowing you'll" << endl;
	cout << "turn into 'one of them' yourself if you dont find and" << endl;
	cout << "inject a vial of Zombaway within the next 10 minutes." << endl;
	cout << endl;
	cout << "You have two choices: end your struggle and opt out, or" << endl;
	cout << "make your way through the warehouse to find a cure." << endl;
	cout << endl;
	cout << "What do you do?" << endl;
	cout << "1. Search warehouse (play game)" << endl;
	cout << "2. Opt out (exit)" << endl;

	//Ask user to play or quit
	menu1();

	//User chooses character type
	int character;
	menu2(character);

	cout << endl;
	cout << "You're in the SE corner room of the 9 room warehouse. The" << endl;
	cout << "only exit is in the far NW corner room. Just outside the" << endl;
	cout << "exit is a medical station that has run out of the Zombaway" << endl;
	cout << "cure. You must find a vial of the cure inside the warehouse" << endl;
	cout << "and bring it to the aid station to have it injected. If you" << endl;
	cout << "fail to find the cure and exit the warehouse within 10" << endl;
	cout << "minutes, the zombie virus will take over." << endl;
	cout << endl;
	cout << "Each room you search will take one full minute. Watch out" << endl;
	cout << "for auto locking doors, and keep an eye out for food that" << endl;
	cout << "may increase the time you have left. But, beware; some food" << endl;
	cout << "may be contaminated and speed up the zombie virus." << endl;

	//Call main game function
	gameStart(character);

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}