/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/15 14:02:52 by alefranc         ###   ########.fr       */
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
	: AAnimal("Dog"), _brain(new Brain())
{
	std::cout << "Default Dog constructor called." << std::endl;
	return;
}

Dog::Dog(const Dog& src)
	: AAnimal(src), _brain(new Brain())
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
	delete this->_brain;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &rhs)
	{
		*this->_brain = rhs.getBrain();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Dog& obj)
{
	o << "Type: " << obj.getType();

	return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const Brain&	Dog::getBrain() const
{
	return (*this->_brain);
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	Dog::makeSound() const
{
	std::cout << "Wooof!" << std::endl;
}

void	Dog::addIdea(const std::string& idea)
{
	this->_brain->addIdea(idea);
}

void	Dog::printIdeas() const
{
	for (int i = 0; i < this->_brain->getNbIdeas(); i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}
