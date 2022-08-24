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
	this->_hp = 100;
	this->_mana = 50;
	this->_dmg = 20;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Parametric ScavTrap constructor called." << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_mana = 50;
	this->_dmg = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Copy ScavTrap constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hp = rhs.getHp();
		this->_mana = rhs.getMana();
		this->_dmg = rhs.getDmg();
	}

	return (*this);
}

std::ostream &	operator<<(std::ostream & o, ScavTrap const & obj)
{
	o	<< "ScavTrap:" << obj.getName()
		<< "|hp:" << obj.getHp()
		<< "|mana:" << obj.getMana()
		<< "|dmg:" << obj.getDmg();

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

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " trying to attack." << std::endl;
	if (this->_hp <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cannot attack because dead.";
	}
	else if (this->_mana <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cannot attack because not enough mana." << std::endl;
	}
	else
	{
		this->_mana--;
		std::cout	<< "ScavTrap " << this->_name << " attacks and deals "
					<< this->_dmg << " to " << target << std::endl;
	}
	return;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " enters in Gate Keeper mode." << std::endl;
}
