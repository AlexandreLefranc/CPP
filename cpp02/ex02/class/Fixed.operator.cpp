/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.operator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:51:52 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/16 16:43:14 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Assignment operator overload
Fixed	& Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
	{
		this->_rawBits = rhs.getRawBits();
	}

	return *this;
}

// Comparison operator overload
bool 	Fixed::operator<(Fixed const &rhs)
{
	if (this->_rawBits < rhs.getRawBits())
	{
		return (true);
	}
	return (false);
}

bool 	Fixed::operator<=(Fixed const &rhs)
{
	if (this->_rawBits <= rhs.getRawBits())
	{
		return (true);
	}
	return (false);
}

bool 	Fixed::operator>(Fixed const &rhs)
{
	if (this->_rawBits > rhs.getRawBits())
	{
		return (true);
	}
	return (false);
}

bool 	Fixed::operator>=(Fixed const &rhs)
{
	if (this->_rawBits >= rhs.getRawBits())
	{
		return (true);
	}
	return (false);
}

bool 	Fixed::operator==(Fixed const &rhs)
{
	if (this->_rawBits == rhs.getRawBits())
	{
		return (true);
	}
	return (false);
}

bool 	Fixed::operator!=(Fixed const &rhs)
{
	if (this->_rawBits != rhs.getRawBits())
	{
		return (true);
	}
	return (false);
}

// Arithmetics operator overload
Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

// Increment and decrement operator overload
// Prefix increment
Fixed	& Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

// Postfix increment
Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_rawBits++;
	return (tmp);
}

// Prefix decrement
Fixed	& Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

// Postfix decrement
Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->_rawBits--;
	return (tmp);
}

// Stream overload
std::ostream	& operator<<(std::ostream &o, Fixed const &fixed)
{
	o << (float)fixed.getRawBits() / (1 << fixed.getBinaryPointPos());
	return (o);
}
