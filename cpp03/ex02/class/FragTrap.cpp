#include "FragTrap.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called." << std::endl;
	this->setHp(100);
	this->setMana(100);
	this->setDmg(30);
	return;
}

FragTrap::FragTrap(std::string const & name)
{
	std::cout << "Parametric FragTrap constructor called." << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setMana(100);
	this->setDmg(30);
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy FragTrap constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHp(rhs.getHp());
		this->setMana(rhs.getMana());
		this->setDmg(rhs.getDmg());
	}

	return (*this);
}

std::ostream &	operator<<(std::ostream & o, FragTrap const &obj)
{
	o	<< "FragTrap:" << obj.getName()
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

void	FragTrap::highFivesGuys()
{
	std::string	answer;

	do
	{
		std::cout << "Are you my buddy ? (y/n)" << std::endl;
		std::cin >> answer;

		if (answer == "y")
		{
			std::cout << "High Five !!!" << std::endl;
		}
		else if (answer == "n")
		{
			std::cout << "Fuck you then" << std::endl;
		}
	} while (answer != "y" && answer != "n");
}
