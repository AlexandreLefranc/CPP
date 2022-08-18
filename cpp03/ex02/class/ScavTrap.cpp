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
	this->setHp(100);
	this->setMana(50);
	this->setDmg(20);
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Parametric ScavTrap constructor called." << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setMana(50);
	this->setDmg(20);
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
		this->setName(rhs.getName());
		this->setHp(rhs.getHp());
		this->setMana(rhs.getMana());
		this->setDmg(rhs.getDmg());
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
	std::cout << "ScavTrap " << this->getName() << " trying to attack." << std::endl;
	if (this->getHp() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " cannot attack because dead.";
	}
	else if (this->getMana() <= 0)
	{
		std::cout << "ScavTrap " << this->getName() << " cannot attack because not enough mana." << std::endl;
	}
	else
	{
		this->setMana(this->getMana() - 1);
		std::cout	<< "ScavTrap " << this->getName() << " attacks and deals "
					<< this->getDmg() << " to " << target << std::endl;
	}
	return;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " enters in Gate Keeper mode." << std::endl;
}
