/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:40:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/11 16:46:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type): _type(type)
{
	return;
}

Weapon::~Weapon()
{
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
