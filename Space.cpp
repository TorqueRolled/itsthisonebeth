/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: cpp file for space class. Contains setters and getters
 *				for space objects.
 ***********************************************************************/

#include "Space.hpp"

void Space::set(Space* u, Space* d, Space* l, Space* r)
{
	up = u;
	down = d;
	left = l;
	right = r;
}

bool Space::getStatus()
{
	return completed;
}

Space* Space::getUp()
{
	return up;
}

Space* Space::getDown()
{
	return down;
}

Space* Space::getLeft()
{
	return left;
}

Space* Space::getRight()
{
	return right;
}
