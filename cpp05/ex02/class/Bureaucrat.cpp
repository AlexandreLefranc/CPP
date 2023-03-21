#include "Bureaucrat.hpp"

/******************************************************************************
*
*                            Constructors
*
******************************************************************************/

Bureaucrat::Bureaucrat()
	: _name("NoName"), _grade(150)
{
	return;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
	: _name(name), _grade(grade)
{
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
	return;
}

/******************************************************************************
*
*                            Operator overload
*
******************************************************************************/

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
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

void				Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
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
	catch (std::exception& e)
	{
		std::cout	<< this->_name << " couldn't sign "
					<< form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout	<< this->_name << " couldn't execute "
					<< form.getName() << " because " << e.what() << std::endl;
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
