/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for player class. Contains the player's location
 *				and functions for moving the user.
 ***********************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Space.hpp"

class Player
{
private:
	Space* location;
public:
	Player(Space*);
	Space* getLoc();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
};
#endif