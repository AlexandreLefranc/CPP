/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:17 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 14:51:00 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{

private:

	std::string	_target;

	// Constructors
	PresidentialPardonForm();

protected:

	// Member functions
	virtual void	_execute() const;

public:

	// Constructors
	PresidentialPardonForm(const PresidentialPardonForm& src);
	PresidentialPardonForm(const std::string& target);

	// Destructors
	virtual ~PresidentialPardonForm();

	// Operator overload
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);

	// Getters (getters should return by value or const-reference)
	const std::string&	getTarget() const;

	// Setters (setters should receive parameters by value or const-reference)

	// Member functions

	// Exceptions

};

std::ostream&	operator<<(std::ostream& o, const PresidentialPardonForm& obj);

#endif
