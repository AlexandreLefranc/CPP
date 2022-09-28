/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:39:52 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/28 17:14:26 by alefranc         ###   ########.fr       */
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
	: _raw(raw), _type(0), _char(48), _int(0), _float(0.0f), _double(0.0)
{
	_detect_type();
	std::cout << _type << std::endl;
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
	o << "char: " << obj.getChar() << std::endl;
	o << "int: " << obj.getInt() << std::endl;
	o << "float: " << obj.getFloat() << "f" << std::endl;
	o << "double: " << obj.getDouble() << std::endl;

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

char				Convertor::getChar() const
{
	return (_char);
}

int					Convertor::getInt() const
{
	return (_int);
}

float				Convertor::getFloat() const
{
	return (_float);
}

double				Convertor::getDouble() const
{
	return (_double);
}

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

static int	static_detect_type1(const std::string& raw)
{
	if (isdigit(raw[0]))
		return (INT);
	else
		return (CHAR);
}

void	Convertor::_detect_type()
{
	if (_raw.empty() == true)
		throw (InvalidStringException());

	std::sscanf(_raw.c_str(), "%d", static_cast<int *>(&_int));
	std::sscanf(_raw.c_str(), "%f", &_float);
	std::sscanf(_raw.c_str(), "%lf", &_double);
	std::sscanf(_raw.c_str(), "%c", &_char);

	if (_raw.size() == 1)
		_type = static_detect_type1(_raw);
	else if (_raw == "nan" || _raw == "+inf" || _raw == "-inf")
		_type = DOUBLE;
	else if (_raw == "nanf" || _raw == "+inff" || _raw == "-inff")
		_type = FLOAT;
	// else if ()
	// else
	// {
	// 	if (std::sscanf(_raw.c_str(), "%d", &_int) != 0)
	// 	{
	// 		std::cout << "Yo" << std::endl;
	// 		_type = INT;
	// 	}
	// }
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

