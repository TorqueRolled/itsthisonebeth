/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: game file for final project. Admins a text base game
 *				where user has to make their way through 9 grid square
 *				'warehouse' to find cure for zombie virus. Has step limit
 *				of ten which may increase if they eat food. Win condition
 *				is them finding a vial, then making it to the exit.
 ***********************************************************************/

#include "Game.hpp"
#include "menu.hpp"
#include "Space.hpp"
#include "ExtDoor.hpp"
#include "LockDoor.hpp"
#include "Food.hpp"
#include "Vial.hpp"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

void gameStart(int pType)
{
	//Seed random generator
	unsigned seed = time(0);
	srand(seed);

	//Build game board spaces
	Space* grid00 = new ExtDoor;
	Space* grid01 = new LockDoor;
	Space* grid02 = new Food;
	Space* grid10 = new LockDoor;
	Space* grid11 = new LockDoor;
	Space* grid12 = new Food;
	Space* grid20 = new Vial;
	Space* grid21 = new Food;
	Space* grid22 = new Food;

	//Link all the grid spaces together with pointers
	grid00->set(nullptr, grid10, nullptr, grid01);
	grid01->set(nullptr, grid11, grid00, grid02);
	grid02->set(nullptr, grid12, grid01, nullptr);
	grid10->set(grid00, grid20, nullptr, grid11);
	grid11->set(grid01, grid21, grid10, grid12);
	grid12->set(grid02, grid22, grid11, nullptr);
	grid20->set(grid10, nullptr, nullptr, grid21);
	grid21->set(grid11, nullptr, grid20, grid22);
	grid22->set(grid12, nullptr, grid21, nullptr);

	//Create player, position in bottom right
	Player p(grid22);

	//Create backpack
	Pack backpack;

	//Game timer
	int clock = 10;

	//Game control, loop while steps remain and objective has not been reached
	while (clock > 0 && !grid00->getStatus()) {

		//Display remaining time
		cout << endl;
		cout << "Time Remaining: " << clock << " minutes" << endl;

		//Movement menu
		int move = menu3(p, backpack);

		//Implement movements
		if (move == 1) {
			p.moveUp();
			p.getLoc()->event(pType, backpack, clock);
		}

		if (move == 2) {
			p.moveDown();
			p.getLoc()->event(pType, backpack, clock);
		}

		if (move == 3) {
			p.moveLeft();
			p.getLoc()->event(pType, backpack, clock);
		}

		if (move == 4) {
			p.moveRight();
			p.getLoc()->event(pType, backpack, clock);
		}

		if (move == 5) {
			backpack.eatFood(pType, clock);
		}
	}

	//Failure end game print out. 
	if (!grid00->getStatus()) {
		cout << endl;
		cout << "Despite all your efforts, the vrius was too powerful. But hey," << endl;
		cout << "look on the bright side. The undead live forever!" << endl;
		cout << endl;
		cout << "YOU LOSE!" << endl;
		cout << endl;
	}

	//Clear up memory
	delete grid00;
	delete grid01;
	delete grid02;
	delete grid10;
	delete grid11;
	delete grid12;
	delete grid20;
	delete grid21;
	delete grid22;
}
