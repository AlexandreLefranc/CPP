/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:55:11 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/27 14:41:16 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Form::Form()
	: _name(""), _signed(false), _gradeSign(1), _gradeExec(1)
{
	return;
}

Form::Form(const std::string& name, int gradeSign, int gradeExec)
	: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_gradeSign > 150 || this->_gradeExec > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	return;
}

Form::Form(const Form& src)
	: _name(src.getName()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

Form::~Form()
{
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Form&	Form::operator=(const Form& rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs.getSigned();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Form& obj)
{
	o	<< "[" << obj.getName() << "] "
		<< (obj.getSigned() == true ? "SIGNED" : "NOT SIGNED") << "; "
		<< "Signing grade: " << obj.getGradeSign() << "; "
		<< "Executing grade: " << obj.getGradeExec();

	 return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const std::string&	Form::getName() const
{
	return (this->_name);
}

bool				Form::getSigned() const
{
	return (this->_signed);
}

int					Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int					Form::getGradeExec() const
{
	return (this->_gradeExec);
}

void				Form::setSigned(bool s)
{
	this->_signed = s;
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
	{
		this->_signed = true;
		return;
	}
	throw (Form::GradeTooLowException());
}

void    Form::execute(const Bureaucrat& executor) const
{
		if (this->_signed == false)
			throw (Form::NotSignedException());
		if (executor.getGrade() > this->_gradeExec)
			throw (Form::GradeTooLowException());
		this->_execute();
}

/******************************************************************************
*
*                            Exceptions
*
******************************************************************************/

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char*	Form::NotSignedException::what() const throw()
{
	return ("Form not signed!");
}