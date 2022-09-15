/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:56:42 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/15 18:33:34 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

AAnimal::AAnimal(const std::string& type)
	: type(type)
{
	std::cout << "Protected param AAnimal constructor called." << std::endl;
	return;
}

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << "Default AAnimal constructor called." << std::endl;
	return;
}

AAnimal::AAnimal(const AAnimal& src)
{
	std::cout << "Copy AAnimal constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "AAnimal assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const AAnimal& obj)
{
	o << "Type: " << obj.getType();

	return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const std::string&	AAnimal::getType() const
{
	return (this->type);
}

void				AAnimal::setType(const std::string& type)
{
	this->type = type;
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/
