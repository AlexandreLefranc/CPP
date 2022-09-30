/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:39:54 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/30 17:25:08 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

# include <iostream>
# include <iomanip>
# include <cstdio>
# include <string>

enum types {
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

class Convertor
{

private:

	std::string _raw;
	int			_type;

	char		_char;
	int			_int;
	float		_float;
	double		_double;

	// Member functions
	void	_detect_type();
	void	_convert_all();

	void	_from_char();
	void	_from_int();
	void	_from_float();
	void	_from_double();

protected:

public:
	// Constructors
	Convertor();
	Convertor(const std::string& raw);
	Convertor(const Convertor& src);

	// Destructors
	virtual ~Convertor();

	// Operator overload
	Convertor&	operator=(const Convertor& rhs);

	// Getters (getters should return by value or const-reference)
	const std::string&	getRaw() const;
	char				getChar() const;
	int					getInt() const;
	float				getFloat() const;
	double				getDouble() const;

	// Setters (setters should receive parameters by value or const-reference)

	// Member functions
	// checkRaw

	// Exceptions
	class InvalidStringException;

};

std::ostream&	operator<<(std::ostream& o, const Convertor& obj);

// Exception nested classes
class Convertor::InvalidStringException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

#endif
