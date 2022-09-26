/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:39:52 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/25 18:44:37 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

Convertor::Convertor()
	: _raw("0")
{
	return;
}

Convertor::Convertor(const std::string& raw)
	: _raw(raw)
{
	return;
}

Convertor::Convertor(const Convertor& src)
	: _raw(src.getRaw())
{
	*this = src;
	return;
}

/*******************************************************************************
*
*                            Destructor
*
*******************************************************************************/

Convertor::~Convertor()
{
	return;
}

/*******************************************************************************
*
*                            Operator overload
*
*******************************************************************************/

Convertor&	Convertor::operator=(const Convertor& rhs)
{
	if (this != &rhs)
	{
		_raw = rhs.getRaw();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Convertor& obj)
{
	o << "char: " << std::endl;
	o << "int: " << std::endl;
	o << "float: " << std::endl;
	o << "double: " << std::endl;

	(void)obj;
	return (o);
}

/*******************************************************************************
*
*                            Accessors
*
*******************************************************************************/

const std::string&	Convertor::getRaw() const
{
	return (_raw);
}

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

void	Convertor::_detect_type()
{
	return;
}

/*******************************************************************************
*
*                            Exceptions
*
*******************************************************************************/

const char*	Convertor::InvalidStringException::what() const throw()
{
	return ("input string is invalid");
}

