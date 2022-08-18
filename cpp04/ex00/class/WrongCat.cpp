/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:19:14 by alefranc         ###   ########.fr       */
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

WrongCat::WrongCat(WrongCat const & src)
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

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
	}

	return (*this);
}

std::ostream &	operator<<(std::ostream & o, WrongCat const &obj)
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
