/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.construct.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:51:55 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/16 16:32:52 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// CONSTRUCTORS
Fixed::Fixed(): _rawBits(0)
{
	return;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return;
}

Fixed::Fixed(int const val): _rawBits(val)
{
	this->_rawBits = this->_rawBits << this->_binaryPointPos;
}

Fixed::Fixed(float const val):
	_rawBits(roundf(val * (float)(1 << this->_binaryPointPos)))
{
	return;
}

// DESTRUCTOR
Fixed::~Fixed()
{
	return;
}
