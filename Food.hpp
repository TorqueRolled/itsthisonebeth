/************************************************************************
 * Author:      Jacob Theander
 * Date:        3/18/2019
 * Description: hpp file for food class. Provides info on this game
 *				space through the event function.
 ***********************************************************************/

#ifndef FOOD_HPP
#define FOOD_HPP
#include "Space.hpp"

class Food : public Space
{
public:
	void event(int, Pack&, int&);
};
#endif