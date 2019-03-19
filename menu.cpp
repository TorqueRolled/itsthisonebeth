/*********************************************************************
 * Author:      Jacob Theander
 * Date:        3/08/2019
 * Description: cpp file for menu function.
 * ******************************************************************/

#include "menu.hpp"
#include <iostream>
#include <limits>
#include <string>

using std::cin;
using std::cout;
using std::endl;

void menu1()
{
	int selection;
	bool menuRun = true;

	while (menuRun != false) {
		while ((cout << "Enter selection: ") && (!(cin >> selection) || (cin.peek() != '\n') || selection < 1 || selection > 2))
		{
			cout << "Invalid input. Please try again." << endl;
			cin.clear();
			cin.ignore(32000, '\n');
		}

		switch (selection)
		{
		case 1:  menuRun = false;
			break;
		case 2:  menuRun = false;
			std::exit(0);
			break;
		default: cout << endl;
			cout << "You must select 1 or 2." << endl;
			cin.clear();
			cin.ignore(32000, '\n');
			break;
		}
	}
}

void menu2(int& selection)
{
	bool menuRun = true;
	cout << endl;
	cout << "Choose your archetype." << endl;
	cout << "1. The Lucky - Fate is often on your side." << endl;
	cout << "2. The Theif - Highly skilled at picking locks." << endl;
	cout << "3. The Bold  - A true hero doesn't need perks." << endl;

	while (menuRun != false) {
		while ((cout << "Enter selection: ") && (!(cin >> selection) || (cin.peek() != '\n') || selection < 1 || selection > 3))
		{
			cout << "Invalid input. Please try again." << endl;
			cin.clear();
			cin.ignore(32000, '\n');
		}

		switch (selection)
		{
		case 1:  menuRun = false;
			selection = 1;
			break;
		case 2:  menuRun = false;
			selection = 2;
			break;
		case 3:  menuRun = false;
			selection = 3;
			break;
		default: cout << endl;
			cout << "You must select 1, 2, or 3." << endl;
			cin.clear();
			cin.ignore(32000, '\n');
			break;
		}
	}
}


int menu3(Player p, Pack backpack)
{
	int selection;
	bool menuRun = true;
	bool op1, op2, op3, op4, op5;
	op1 = op2 = op3 = op4 = op5 = false;

	cout << "MOVEMENT OPTIONS" << endl;

	if (p.getLoc()->getUp() != nullptr) {
		cout << "1. Move Up" << endl;
		op1 = true;
	}

	if (p.getLoc()->getDown() != nullptr) {
		cout << "2. Move Down" << endl;
		op2 = true;
	}

	if (p.getLoc()->getLeft() != nullptr) {
		cout << "3. Move Left" << endl;
		op3 = true;
	}

	if (p.getLoc()->getRight() != nullptr) {
		cout << "4. Move Right" << endl;
		op4 = true;
	}

	if (backpack.getFood() != 0) {
		cout << "5. Eat Food" << endl;
		op5 = true;
	}

	while (menuRun != false) {
		while ((cout << "Enter selection: ") && (!(cin >> selection) || (cin.peek() != '\n') || selection < 1 || selection > 5))
		{
			cout << "Invalid input. Please try again." << endl;
			cin.clear();
			cin.ignore(32000, '\n');
		}

		switch (selection)
		{
		case 1:  
			if (op1 == true) {
				menuRun = false;
				return 1;
				break;
			}
			else {
				cout << "Invalid input. Please try again." << endl;
			}
		case 2:  
			if (op2 == true) {
				menuRun = false;
				return 2;
				break;
			}
			else {
				cout << "Invalid input. Please try again." << endl;
				break;
			}
		case 3:  
			if (op3 == true) {
				menuRun = false;
				return 3;
				break;
			}
			else {
				cout << "Invalid input. Please try again." << endl;
				break;
			}
		case 4:  
			if (op4 == true) {
				menuRun = false;
				return 4;
				break;
			}
			else {
				cout << "Invalid input. Please try again." << endl;
				break;
			}
		case 5:  
			if (op5 == true) {
				menuRun = false;
				return 5;
				break;
			}
			else {
				cout << "Invalid input. Please try again." << endl;
				cout << endl;
				break;
			}
		default: 
			cout << endl;
			cout << "Invalid input. Please try again." << endl;
			cin.clear();
			cin.ignore(32000, '\n');
			break;
		}
	}
}
