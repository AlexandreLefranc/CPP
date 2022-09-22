/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:17 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/22 19:59:03 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{

private:

	std::string	_target;

	// Constructors
	ShrubberyCreationForm();

protected:

	// Member functions
	virtual void	_execute() const;

public:

	// Constructors
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	ShrubberyCreationForm(const std::string& target);

	// Destructors
	virtual ~ShrubberyCreationForm();

	// Operator overload
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);

	// Getters (getters should return by value or const-reference)
	const std::string&	getTarget() const;

	// Setters (setters should receive parameters by value or const-reference)

	// Member functions

	// Exceptions
	class ExampleException;

};

std::ostream&	operator<<(std::ostream& o, const ShrubberyCreationForm& obj);

class ShrubberyCreationForm::ExampleException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

#endif
