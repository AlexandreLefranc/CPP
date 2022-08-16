/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:16:39 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/16 19:31:46 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(): _name(""), _hp(10), _mana(10), _dmg(0)
{
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mana(10), _dmg(0)
{
	return;
}

ClapTrap::~ClapTrap()
{
	return;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hp = rhs.getHp();
		this->_mana = rhs.getMana();
		this->_dmg = rhs.getDmg();
	}
	
	return (*this);
}

std::string	getName() const
{
	return (this->_name);
}

int			getHp() const
{
	return (this->_hp);
}

int			getMana() const
{
	return (this->_mana);
}

int			getDmg() const
{
	return (this->_dmg);
}

void	attack(std::string const & target)
{
	if (this->_hp <= 0)
	{
		std::cout << this->_name << " cannot attack because dead."
	}
	else if (this->_mana <= 0)
	{
		std::cout << this->_name << " cannot attack because not enough mana." << std::endl;
	}
	else
	{
		this->_mana--;
		std::cout	<< this->_name << "attacks and deals " << this->_dmg
					<< "to " << target << std::endl;
	}
	return;
}

void	takeDamage(unsigned int amount)
{
	if (this->_hp )
}

void	beRepaired(unsigned int amount);
