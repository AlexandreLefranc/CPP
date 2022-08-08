/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:44:46 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 16:59:58 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

std::string	HumanA::getName() const
{
	return (this->_name);
}

void		HumanA::setName(std::string name)
{
	this->_name = name;
}

void		HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
