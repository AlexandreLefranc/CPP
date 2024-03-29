/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:12 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/23 13:53:37 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*******************************************************************************
*
*                            Constructors
*
*******************************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137), _target("")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
	: Form("ShrubberyCreationForm", 145, 137), _target("")
{
	*this = src;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

/*******************************************************************************
*
*                            Destructor
*
*******************************************************************************/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

/*******************************************************************************
*
*                            Operator overload
*
*******************************************************************************/

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const ShrubberyCreationForm& obj)
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

const std::string&	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

/*******************************************************************************
*
*                            Member functions
*
*******************************************************************************/

void	ShrubberyCreationForm::_execute() const
{
	std::string	filename;

	filename = this->_target + "_shrubbery";
	std::ofstream	ofs(filename.c_str());
	if (!ofs)
	{
		std::cerr << "File " << filename << "couldn't be open" << std::endl;
		return;
	}
	ofs << "des arbres ASCII";

	return;
}

/*******************************************************************************
*
*                            Exceptions
*
*******************************************************************************/

