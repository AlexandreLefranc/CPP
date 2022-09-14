/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/14 17:24:17 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Cat::Cat()
{
	std::cout << "Default Cat constructor called." << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
	return;
}

Cat::Cat(const Cat& src): Animal(src)
{
	std::cout << "Copy Cat constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
	delete this->_brain;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->_brain[i] = rhs.getBrain().getIdea(i);
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Cat& obj)
{
	o << "Type: " << obj.getType();

	return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const Brain&	Cat::getBrain()
{
	return (*this->_brain);
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	Cat::makeSound() const
{
	std::cout << "Miaou!" << std::endl;
}

void	Cat::addIdea(const std::string& idea)
{
	this->_brain->addIdea(idea);
}

void	Cat::printIdeas() const
{
	for (int i = 0; i < this->_brain->getNbIdeas(); i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}
