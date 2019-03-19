/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: hpp file for pack class. Used as the player's backpack.
 *				'Holds' food and vial in game for objectiives. 
 ***********************************************************************/

#ifndef PACK_HPP
#define PACK_HPP

class Pack
{
private:
	int food, zombaway;
public:
	Pack();
	int getFood();
	void addFood();
	void eatFood(int, int&);
	void addZombaway();
	int getZombaway();
};
#endif

