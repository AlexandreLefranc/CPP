/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:56:42 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/13 14:50:38 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "Copy WrongAnimal constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const WrongAnimal& obj)
{
	o << "Type: " << obj.getType();

	return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const std::string&	WrongAnimal::getType() const
{
	return (this->type);
}

void				WrongAnimal::setType(const std::string& type)
{
	this->type = type;
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	WrongAnimal::makeSound() const
{
	std::cout << "*Undistinguishable animal sound*" << std::endl;
}
