/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:02:11 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/13 15:36:25 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

Span::Span()
	: _data(std::vector<int>(0, 0)), _max(0), _count(0)
{
	return;
}

Span::Span(unsigned int n)
	: _data(std::vector<int>(0, 0)), _max(n), _count(0)
{
	return;
}

Span::Span(const Span& src)
{
	*this = src;
	return;
}

// /*******************************************************************************
// *
// *                            Destructor
// *
// *******************************************************************************/
//
Span::~Span()
{
	return;
}
//
// /*******************************************************************************
// *
// *                            Operator overload
// *
// *******************************************************************************/
//
Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		_data = rhs._data;
		_max  = rhs._max;
		_count = rhs._count;
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Span& obj)
{
	o << "[ ";
	for (unsigned long i = 0; i < obj.getData().size(); i++)
		o << obj.getData()[i] << " ";
	o << "]";

	return (o);
}

/*******************************************************************************
*
*                            Accessors
*
*******************************************************************************/

const std::vector<int>&	Span::getData() const
{
	return (_data);
}

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

void	Span::addNumber(int n)
{
	if (_count < _max)
	{
		_data.push_back(n);
		_count++;
	}
	else
		throw (FullSpanException());
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (end - begin + _data.size() > _max)
		throw (FullSpanException());
	_data.insert(_data.end(), begin, end);
}

int		Span::shortestSpan()
{
	std::vector<int>	tmp = _data;
	int					shortest;

	if (_data.size() < 2)
		throw (TooSmallSpanException());

	std::sort(tmp.begin(), tmp.end());
	shortest = tmp[1] - tmp[0];
	for (unsigned long int i = 0; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < shortest)
			shortest = tmp[i + 1] - tmp[i];
	}

	return (shortest);
}

int		Span::longestSpan()
{
	if (_data.size() < 2)
		throw (TooSmallSpanException());

	int	min = *std::min_element(_data.begin(), _data.end());
	int	max = *std::max_element(_data.begin(), _data.end());

	return (max - min);
}

/*******************************************************************************
*
*                            Exceptions
*
*******************************************************************************/

const char*	Span::FullSpanException::what() const throw()
{
	return ("Span is full!");
}

const char*	Span::TooSmallSpanException::what() const throw()
{
	return ("Span is too small!");
}

