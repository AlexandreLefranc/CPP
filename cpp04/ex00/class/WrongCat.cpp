/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/13 14:30:36 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called." << std::endl;
	this->type = "WrongCat";
	return;
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src)
{
	std::cout << "Copy WrongCat constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const WrongCat& obj)
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

void	WrongCat::makeSound() const
{
	std::cout << "Miaou!" << std::endl;
}
