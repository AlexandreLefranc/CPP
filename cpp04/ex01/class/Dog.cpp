/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:11:46 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Dog::Dog()
{
	std::cout << "Default Dog constructor called." << std::endl;
	this->type = "Dog";
	return;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Copy Dog constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Dog &	Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}

	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Dog const &obj)
{
	o << "Type: " << obj.getType();

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

void	Dog::makeSound() const
{
	std::cout << "Wooof!" << std::endl;
}