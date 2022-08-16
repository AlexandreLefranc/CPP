/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:30:56 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/16 16:54:16 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

int		Fixed::toInt() const
{
	return (this->_rawBits >> Fixed::getBinaryPointPos());
}

float	Fixed::toFloat() const
{
	return ((float)this->_rawBits / (1 << this->getBinaryPointPos()));
}

const int Fixed::_binaryPointPos = 8;

int		Fixed::getBinaryPointPos()
{
	return (Fixed::_binaryPointPos);
}

Fixed	& Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
	{
		return (lhs);
	}
	return (rhs);
}

Fixed const	& Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
	{
		return (lhs);
	}
	return (rhs);
}

Fixed	& Fixed::max(Fixed & lhs, Fixed &rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
	{
		return (lhs);
	}
	return (rhs);
}

Fixed const	& Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
	{
		return (lhs);
	}
	return (rhs);
}
