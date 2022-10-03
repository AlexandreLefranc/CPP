/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:39:52 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/03 18:01:46 by alefranc         ###   ########.fr       */
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
	, _char_int_possible(true)//, _int_overflow(false)
{
	_detect_type();
	_convert_all();
	return;
}

Convertor::Convertor(const Convertor& src)
{
	*this = src;
	_detect_type();
	_convert_all();
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
		_raw = rhs._raw;
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Convertor& obj)
{
	// print char
	if (obj.getCharIntPossible() == false || obj.getIntOverflow() == true)
		o << "char: impossible" << std::endl;
	else if (obj.getInt() < 32 || obj.getInt() > 126)
		o << "char: Non displayable" << std::endl;
	else
		o << "char: " << "'" << obj.getChar() << "'" << std::endl;

	// print int
	if (obj.getCharIntPossible() == false || obj.getIntOverflow() == true)
		o << "int: impossible" << std::endl;
	else
		o << "int: " << obj.getInt() << std::endl;

	o << std::setprecision(1) << std::fixed;

	// print float
	if (obj.getIntOverflow() == true)
		o << "float: impossible" << std::endl;
	else
		o << "float: " << obj.getFloat() << "f" << std::endl;

	// print double
	if (obj.getIntOverflow() == true)
		o << "double: impossible" << std::endl;
	else
		o << "double: " << obj.getDouble() << std::endl;

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

bool				Convertor::getCharIntPossible() const
{
	return (_char_int_possible);
}

bool				Convertor::getIntOverflow() const
{
	return (_int_overflow);
}

void				Convertor::setCharIntPossible(bool val)
{
	_char_int_possible = val;
}

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

static bool	_is_char(const std::string& raw)
{
	if (raw.length() == 3 && raw[0] == '\'' && raw[2] == '\'')
		return (true);
	return (false);
}

static bool	_is_int(const std::string& raw)
{
	for (size_t i = 0; i < raw.length(); i++)
	{
		if (i == 0 && raw[i] == '-')
			continue;
		if (isdigit(raw[i]) == 0)
			return (false);
	}
	return (true);
}

static bool	_is_float(const std::string& raw, Convertor& c)
{
	bool	found_dot;
	size_t	i;

	if (raw == "nanf" || raw == "+inff" || raw == "-inff")
	{
		c.setCharIntPossible(false);
		return (true);
	}
	found_dot = false;
	i = 0;
	if (raw[0] == '-')
		i = 1;
	for (; i < raw.length(); i++)
	{
		if (raw[i] == '.')
		{
			if (found_dot == false)
				found_dot = true;
			else
				return (false);
			continue;
		}
		if (i == raw.length() - 1 && raw[i] == 'f')
			return (true);
		if (isdigit(raw[i]) == 0)
			return (false);
	}
	return (false);
}

static bool	_is_double(const std::string& raw, Convertor& c)
{
	bool	found_dot;
	size_t	i;

	if (raw == "nan" || raw == "+inf" || raw == "-inf")
	{
		c.setCharIntPossible(false);
		return (true);
	}
	found_dot = false;
	i = 0;
	if (raw[0] == '-')
		i = 1;
	for (; i < raw.length(); i++)
	{
		if (raw[i] == '.')
		{
			if (found_dot == false)
				found_dot = true;
			else
				return (false);
			continue;
		}
		if (isdigit(raw[i]) == 0)
			return (false);
	}
	return (true);
}

static bool	_is_int_overflow(const std::string& nb)
{
	std::string	nb2 = nb;
	bool		is_negative = false;

	if (nb[0] == '-')
	{
		nb2.erase(0,1);
		is_negative = true;
	}
	if (nb2.length() < 10)
		return (false);
	else if (nb2.length() > 10)
		return (true);
	else if (!is_negative && nb2.compare("2147483647") > 0)
		return (true);
	else if (is_negative && nb2.compare("2147483648") > 0)
		return (true);
	return (false);
}

void	Convertor::_detect_type()
{
	if (_is_char(_raw) == true)
		_type = CHAR;
	else if (_is_int(_raw) == true)
	{
		_type = INT;
		_int_overflow = _is_int_overflow(_raw);
	}
	else if (_is_float(_raw, *this) == true)
		_type = FLOAT;
	else if (_is_double(_raw, *this) == true)
		_type = DOUBLE;
	else
		throw (InvalidStringException());

	return;
}

void	Convertor::_from_char()
{
	_char = _raw[1];
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void	Convertor::_from_int()
{
	std::sscanf(_raw.c_str(), "%d", &_int);
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void	Convertor::_from_float()
{
	std::sscanf(_raw.c_str(), "%f", &_float);
	_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
}

void	Convertor::_from_double()
{
	std::sscanf(_raw.c_str(), "%lf", &_double);
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}

void	Convertor::_convert_all()
{
	switch (_type)
	{
		case CHAR:
			_from_char();
			break;
		case INT:
			_from_int();
			break;
		case FLOAT:
			_from_float();
			break;
		case DOUBLE:
			_from_double();
			break;
		default:
			throw (InvalidStringException());
	}
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

