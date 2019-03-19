/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: hpp file for vial class. Provides info on this game
 *				space through the event function.
 ***********************************************************************/

#ifndef VIAL_HPP
#define VIAL_HPP
#include "Space.hpp"

class Vial : public Space
{
public:
	void event(int, Pack&, int&);
};
#endif