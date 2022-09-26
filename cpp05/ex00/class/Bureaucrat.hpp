#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{

private:

	const std::string	_name;
	int					_grade;

protected:

public:

	// Constructors
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& src);

	// Destructors
	virtual ~Bureaucrat();

	// Operator overload
	Bureaucrat&	operator=(const Bureaucrat& rhs);

	// Accessors (getters should return by value or const-reference)
	const std::string&	getName() const;
	int					getGrade() const;
	void				setGrade(int grade);

	// Member functions
	void	gradeUp();
	void	gradeDown();

	// Exceptions
	class GradeTooHighException;
	class GradeTooLowException;

};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& obj);

class Bureaucrat::GradeTooHighException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

class Bureaucrat::GradeTooLowException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

#endif
