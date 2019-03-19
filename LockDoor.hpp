/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: hpp file for lockDoor class. Provides info on this game
 *				space through the event function.
 ***********************************************************************/

#ifndef LOCKDOOR_HPP
#define LOCKDOOR_HPP
#include "Space.hpp"

class LockDoor : public Space
{
public:
	void event(int, Pack&, int&);
};
#endif