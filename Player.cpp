/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for player class. Contains the player's location
 *				and functions for moving the user. 
 ***********************************************************************/

#include "Player.hpp"

Player::Player(Space* loc)
{
	location = loc;
}

Space* Player::getLoc()
{
	return location;
}

void Player::moveUp()
{
	location = location->up;
}

void Player::moveDown()
{
	location = location->down;
}

void Player::moveLeft()
{
	location = location->left;
}

void Player::moveRight()
{
	location = location->right;
}
