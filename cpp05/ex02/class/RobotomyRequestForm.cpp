/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:12 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 14:55:24 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45), _target("")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
	: Form("RobotomyRequestForm", 72, 45), _target("")
{
	*this = src;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}

/*******************************************************************************
*
*                            Destructor
*
*******************************************************************************/

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

/*******************************************************************************
*
*                            Operator overload
*
*******************************************************************************/

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const RobotomyRequestForm& obj)
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

const std::string&	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

void	RobotomyRequestForm::_execute() const
{
	int 		r;
	srand(time(0));

	std::cout << "*BZZZZZZZZZZZZZZZZZz*" << std::endl;
	std::cout << "*CRACK*" << std::endl;
	std::cout << "*AAHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHHH*" << std::endl;
	r = ((double) rand() / (RAND_MAX)) + 1;
	if (r > 0.5)
	{
		std::cout << this->_target <<" has been robotomised!"  << std::endl;
	}
	else
	{
		std::cout << "Robotomy failed! " << this->_target << " died!"   << std::endl;
	}

	return;
}

/*******************************************************************************
*
*                            Exceptions
*
*******************************************************************************/

