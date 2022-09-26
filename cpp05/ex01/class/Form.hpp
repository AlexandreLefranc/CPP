#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{

private:

	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;

protected:

public:

	// Constructors
	Form();
	Form(const std::string& name, int gradeSign, int gradeExec);
	Form(const Form& src);

	// Destructors
	virtual ~Form();

	// Operator overload
	Form&	operator=(const Form& rhs);

	// Accessors (getters should return by value or const-reference)
	const std::string&	getName() const;
	bool				getSigned() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	void				setSigned(bool signed);

	// Member functions
	void	beSigned(const Bureaucrat& bureaucrat);

	// Exceptions
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& o, const Form& obj);

#endif
