/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: hpp file for extDoor class. Provides info on this game
 *				space through the event function.
 ***********************************************************************/

#ifndef EXTDOOR_HPP
#define EXTDOOR_HPP
#include "Space.hpp"

class ExtDoor : public Space
{
public:
	void event(int, Pack&, int&);
};
#endif