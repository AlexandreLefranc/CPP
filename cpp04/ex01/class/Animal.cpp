/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:56:42 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/14 19:22:50 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Animal::Animal(const std::string& type)
	: type(type)
{
	std::cout << "Protected param Animal constructor called." << std::endl;
	return;
}

Animal::Animal(): type("Animal")
{
	std::cout << "Default Animal constructor called." << std::endl;
	return;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Copy Animal constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

Animal::~Animal()
{
	std::cout << "Animal Destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Animal& obj)
{
	o << "Type: " << obj.getType();

	return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const std::string&	Animal::getType() const
{
	return (this->type);
}

void				Animal::setType(const std::string& type)
{
	this->type = type;
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	Animal::makeSound() const
{
	std::cout << "*Undistinguishable animal sound*" << std::endl;
}
