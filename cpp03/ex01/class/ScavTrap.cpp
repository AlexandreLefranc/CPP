#include "ScavTrap.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	(void)name;
	std::cout << "Parametric ScavTrap constructor called." << std::endl;
}

// ScavTrap::ScavTrap(ScavTrap const & src)
// {
// 	*this = src;
// 	return;
// }

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

ScavTrap::~ScavTrap()
{
	std::cout << "BYYYYYE" << std::endl;
	return;
}

// /******************************************************************************
// *
// *                            Operator overload
// *
// ******************************************************************************/
//
// ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
// {
// 	if (this != &rhs)
// 	{
// 		// Copy all attributes
// 	}
//
// 	return (*this);
// }
//
// std::ostream &	operator<<(std::ostream & o, ScavTrap const &obj)
// {
// 	o << "something";
//
// 	 return (o);
// }
//
// /******************************************************************************
// *
// *                            Accessors
// *
// ******************************************************************************/
//
// /******************************************************************************
// *
// *                            Member functions
// *
// ******************************************************************************/
//
