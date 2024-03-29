/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:01:14 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/12 14:43:09 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

std::string	HumanB::getName() const
{
	return (this->_name);
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void		HumanB::attack() const
{
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " doesn't have any weapon to attack with :(" << std::endl;
	}
	else
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}

}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
