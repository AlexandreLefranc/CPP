/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:56:08 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/25 16:51:51 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cstddef>

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

Intern::Intern()
{
	return;
}

Intern::Intern(const Intern& src)
{
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
	return;
}

/*******************************************************************************
*
*                            Operator overload
*
*******************************************************************************/

Intern&	Intern::operator=(const Intern& rhs)
{
	if (this != &rhs)
	{
		// Copy all attributes
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Intern& obj)
{
	o << "Something...";
	(void)obj;

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

Form*	Intern::_makePresidentialPardonForm(const std::string& target) const
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::_makeRobotomyRequestForm(const std::string& target) const
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::_makeShrubberyCreationForm(const std::string& target) const
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeForm(const std::string& type, const std::string& target) const
{
	t_form_type	allForms[] = {
		{"presidential pardon", &Intern::_makePresidentialPardonForm},
		{"robotomy request", &Intern::_makeRobotomyRequestForm},
		{"shrubbery creation", &Intern::_makeShrubberyCreationForm},
		{"", NULL}
	};
	int			i = 0;
	Form*		form;

	while (allForms[i].fn != NULL)
	{
		if (allForms[i].type == type)
		{
			form = (this->*(allForms[i].fn))(target);
			std::cout << "Intern created " << allForms[i].type << std::endl;
			return (form);
		}
		i++;
	}
	std::cout	<< "Intern could not create " << type << std::endl;

	return (NULL);
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

