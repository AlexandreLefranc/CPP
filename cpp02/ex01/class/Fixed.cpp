/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:30:56 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/12 13:15:32 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// CONSTUCTORS
Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const val): _rawBits(val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = this->_rawBits << this->_binaryPointPos;
}

Fixed::Fixed(float const val): _rawBits(val)
{
	std::cout << "Float constructor called" << std::endl;
}

// DESTRUCTOR
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// OPERATOR OVERLOAD
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_rawBits = rhs.getRawBits();
	}

	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << (fixed.getRawBits() >> Fixed::getBinaryPointPos());
}

// GETTERS
int		Fixed::getRawBits() const
{
	return (this->_rawBits);
}

// SETTERS
void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

const int Fixed::_binaryPointPos = 8;

int		Fixed::getBinaryPointPos() const
{
	return (Fixed::_binaryPointPos);
}
