/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:16:39 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 14:58:40 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

ClapTrap::ClapTrap(): _name(""), _hp(10), _mana(10), _dmg(0)
{
	std::cout << "Default ClapTrap constructor called." << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy ClapTrap constructor called." << std::endl;
	*this = src;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mana(10), _dmg(0)
{
	std::cout << "Parametric ClapTrap constructor called: " << this->_name << std::endl;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hp = rhs.getHp();
		this->_mana = rhs.getMana();
		this->_dmg = rhs.getDmg();
	}

	return (*this);
}

std::ostream &	operator<<(std::ostream & o, ClapTrap const &obj)
{
	o	<< "ClapTrap:" << obj.getName()
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

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

int			ClapTrap::getHp() const
{
	return (this->_hp);
}

int			ClapTrap::getMana() const
{
	return (this->_mana);
}

int			ClapTrap::getDmg() const
{
	return (this->_dmg);
}

void		ClapTrap::setName(std::string const & name)
{
	this->_name = name;
}

void		ClapTrap::setHp(int x)
{
	this->_hp = x;
}

void		ClapTrap::setMana(int x)
{
	this->_mana = x;
}

void		ClapTrap::setDmg(int x)
{
	this->_dmg = x;
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " trying to attack." << std::endl;
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack because dead.";
	}
	else if (this->_mana <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack because not enough mana." << std::endl;
	}
	else
	{
		this->_mana--;
		std::cout	<< "ClapTrap " << this->_name << " attacks and deals "
					<< this->_dmg << " to " << target << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes damages." << std::endl;
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " loses " << amount << " health point." << std::endl;
		this->_hp -= amount;
		if (this->_hp <= 0)
		{
			std::cout << "ClapTrap " << this->_name << " died." << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " trying to repair." << std::endl;
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot repair because dead.";
	}
	else if (this->_mana <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot repair because not enough mana." << std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap " << this->_name << " repair and gain "
					<< amount << " health point." << std::endl;
		this->_mana--;
		this->_hp += amount;
	}
}
