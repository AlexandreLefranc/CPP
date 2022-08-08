/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:40:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 17:00:21 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type): _type(type)
{
	// std::cout << "Club constructor called with type=" << type << std::endl;
	return;
}

Weapon::~Weapon()
{
	// std::cout << "Club destructor called" << std::endl;
	return;
}

std::string	Weapon::getType() const
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}
