/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/13 15:07:15 by alex             ###   ########.fr       */
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
	this->brain = new Brain();
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
		this->type = rhs.getType();
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

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	Cat::makeSound() const
{
	std::cout << "Miaou!" << std::endl;
}
