/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:56:14 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 17:05:11 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern
{

private:

	std::string _form_type[4];

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


// Exception nested classes
// class Intern::ExampleException: public std::exception
// {
// public:
// 	virtual const char*	what() const throw();
// };

#endif
