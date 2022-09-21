#include "Bureaucrat.hpp"

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Bureaucrat::Bureaucrat()
	: _name("NoName"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
	: _name(name), _grade(grade)
{
	std::cout << "Param Bureaucrat constructor called." << std::endl;
	if (this->_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	std::cout << "Copy Bureaucrat constructor called." << std::endl;
	*this = src;
	return;
}

/******************************************************************************
*
*                            Destructor
*
******************************************************************************/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called." << std::endl;
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Bureaucrat Assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();

	return (o);
}

/******************************************************************************
*
*                            Accessors
*
******************************************************************************/

const std::string&	Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/******************************************************************************
*
*                            Member functions
*
******************************************************************************/

void	Bureaucrat::gradeUp()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return;
}

void	Bureaucrat::gradeDown()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return;
}

void	Bureaucrat::signForm(Form& form) const
{
	if (form.getSigned() == true)
	{
		std::cout	<< this->_name << " couldn't sign "
					<< form.getName() << " because already signed" << std::endl;
		return;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout	<< this->_name << " couldn't sign "
					<< form.getName() << " because " << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout	<< this->_name << " couldn't sign "
					<< form.getName() << " for unknown reason"<< std::endl;
	}
}

/******************************************************************************
*
*                            Exceptions
*
******************************************************************************/

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}
