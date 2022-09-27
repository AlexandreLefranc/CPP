/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:06:20 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/27 14:40:14 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	// Constructors
	Form();
	Form(const Form& src);

protected:

	// Constructors
	Form(const std::string& name, int gradeSign, int gradeExec);

	// Member functions
	virtual void	_execute() const = 0;

public:

	// Constructors
	// 		No public constructor

	// Destructors
	virtual ~Form();

	// Operator overload
	Form&	operator=(const Form& rhs);

	// Accessors (getters should return by value or const-reference)
	const std::string&	getName() const;
	bool				getSigned() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	void				setSigned(bool s);

	// Member functions
	void	beSigned(const Bureaucrat& bureaucrat);
	void	execute(const Bureaucrat& executor) const;

	// Exceptions
	class GradeTooHighException;
	class GradeTooLowException;
	class NotSignedException;
};

std::ostream&	operator<<(std::ostream& o, const Form& obj);

class Form::GradeTooHighException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

class Form::GradeTooLowException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

class Form::NotSignedException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

#endif
