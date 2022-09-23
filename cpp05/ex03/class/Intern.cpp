/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:56:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 17:07:15 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

Intern::Intern()
{
	std::cout << "Default Intern constructor called." << std::endl;
	return;
}

Intern::Intern(const Intern& src)
{
	std::cout << "Copy Intern constructor called." << std::endl;
	*this = src;
	return;
}

/*******************************************************************************
*
*                            Destructor
*
*******************************************************************************/

Intern::~Intern()
{
	std::cout << "Intern Destructor called." << std::endl;
	return;
}

/*******************************************************************************
*
*                            Operator overload
*
*******************************************************************************/

Intern&	Intern::operator=(const Intern& rhs)
{
	std::cout << "Intern Assignment operator called." << std::endl;
	if (this != &rhs)
	{
		// Copy all attributes
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Intern& obj)
{
	o << "An Intern";

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

Form*	Intern::makeForm(const std::string& type, const std::string& target) const
{
	for (int i = 0; i < 4; i++)
		std::cout << _form_type[i] << std::endl;
}

/*******************************************************************************
*
*                            Exceptions
*
*******************************************************************************/

// const char*	Intern::ExampleException::what() const throw()
// {
// 	return ("Example exception message");
// }

