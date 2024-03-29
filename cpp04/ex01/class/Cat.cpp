/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/15 13:39:45 by alefranc         ###   ########.fr       */
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
	: Animal("Cat"), _brain(new Brain())
{
	std::cout << "Default Cat constructor called." << std::endl;
	return;
}

Cat::Cat(const Cat& src)
	: Animal(src), _brain(new Brain())
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
		*this->_brain = rhs.getBrain();
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

const Brain&	Cat::getBrain() const
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
