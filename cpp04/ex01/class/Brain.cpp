#include "Brain.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Brain::Brain(): _n_idas(0)
{
	std::cout << "Default Brain constructor called." << std::endl;
	return;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Copy Brain constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Brain &	Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		// Copy all attributes
	}

	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Brain const &obj)
{
	o << "something";

	 return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/
