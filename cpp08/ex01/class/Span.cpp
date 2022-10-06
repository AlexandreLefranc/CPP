#include "Span.hpp"

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

Span::Span()
{
	std::cout << "Default Span constructor called." << std::endl;
	return;
}

Span::Span(const Span& src)
{
	std::cout << "Copy Span constructor called." << std::endl;
	*this = src;
	return;
}

/*******************************************************************************
*
*                            Destructor
*
*******************************************************************************/

Span::~Span()
{
	std::cout << "Span Destructor called." << std::endl;
	return;
}

/*******************************************************************************
*
*                            Operator overload
*
*******************************************************************************/

Span&	Span::operator=(const Span& rhs)
{
	std::cout << "Span Assignment operator called." << std::endl;
	if (this != &rhs)
	{
		// Copy all attributes
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Span& obj)
{
	o << "A Span instance";

	return (o);
}

/*******************************************************************************
*
*                            Accessors
*
*******************************************************************************/

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

/*******************************************************************************
*
*                            Exceptions
*
*******************************************************************************/

const char*	Span::ExampleException::what() const throw()
{
	return ("Example exception message");
}

