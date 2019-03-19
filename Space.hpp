/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: hpp file for space class. Contains setters and getters
 *				for space objects.
 ***********************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP
#include "Pack.hpp"

class Space
{
protected:
	bool completed;
	Space* up;
	Space* down;
	Space* left;
	Space* right;
	friend class Player;
public:
	void set(Space*, Space*, Space*, Space*);
	bool getStatus();
	Space* getUp();
	Space* getDown();
	Space* getLeft();
	Space* getRight();
	virtual void event(int, Pack&, int&) = 0;
};
#endif