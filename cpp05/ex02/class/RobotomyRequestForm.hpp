/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:17 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 14:51:03 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{

private:

	std::string	_target;

	// Constructors
	RobotomyRequestForm();

protected:

	// Member functions
	virtual void	_execute() const;

public:

	// Constructors
	RobotomyRequestForm(const RobotomyRequestForm& src);
	RobotomyRequestForm(const std::string& target);

	// Destructors
	virtual ~RobotomyRequestForm();

	// Operator overload
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);

	// Getters (getters should return by value or const-reference)
	const std::string&	getTarget() const;

	// Setters (setters should receive parameters by value or const-reference)

	// Member functions

	// Exceptions

};

std::ostream&	operator<<(std::ostream& o, const RobotomyRequestForm& obj);

#endif
