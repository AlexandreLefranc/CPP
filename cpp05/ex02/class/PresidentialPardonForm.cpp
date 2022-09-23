/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:12 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 14:53:39 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5), _target("")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
	: Form("PresidentialPardonForm", 25, 5), _target("")
{
	*this = src;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return;
}

/*******************************************************************************
*
*                            Destructor
*
*******************************************************************************/

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

/*******************************************************************************
*
*                            Operator overload
*
*******************************************************************************/

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const PresidentialPardonForm& obj)
{
	o	<< "[" << obj.getName() << "] "
		<< (obj.getSigned() == true ? "SIGNED" : "NOT SIGNED") << "; "
		<< "Signing grade: " << obj.getGradeSign() << "; "
		<< "Executing grade: " << obj.getGradeExec() << "; "
		<< "Target: " << obj.getTarget();

	return (o);
}

/*******************************************************************************
*
*                            Accessors
*
*******************************************************************************/

const std::string&	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

void	PresidentialPardonForm::_execute() const
{
	std::cout << this->_target + " has been pardonned by Zaphod Beeblebrox" << std::endl;

	return;
}

/*******************************************************************************
*
*                            Exceptions
*
*******************************************************************************/

