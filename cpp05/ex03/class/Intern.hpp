/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:56:14 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/25 16:21:09 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

private:

	// Member functions
	Form*	_makePresidentialPardonForm(const std::string& target) const;
	Form*	_makeRobotomyRequestForm(const std::string& target) const;
	Form*	_makeShrubberyCreationForm(const std::string& target) const;

protected:

public:
	// Constructors
	Intern();
	Intern(const Intern& src);

	// Destructors
	virtual ~Intern();

	// Operator overload
	Intern&	operator=(const Intern& rhs);

	// Getters (getters should return by value or const-reference)

	// Setters (setters should receive parameters by value or const-reference)

	// Member functions
	Form*	makeForm(const std::string& type, const std::string& target) const;

	// Exceptions
	// class UnknownFormException;

};

std::ostream&	operator<<(std::ostream& o, const Intern& obj);

typedef struct s_form_type
{
	std::string	type;
	Form*		(Intern::*fn)(const std::string&) const;
}	t_form_type;

#endif
