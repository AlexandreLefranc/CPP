/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:02:14 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/13 15:34:14 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{

private:

	std::vector<int>	_data;
	unsigned int		_max;
	unsigned int		_count;

	// Constructors
	Span();

protected:

public:

	// Constructors
	Span(unsigned int n);
	Span(const Span& src);

	// Destructors
	virtual ~Span();

	// Operator overload
	Span&	operator=(const Span& rhs);

	// Getters (getters should return by value or const-reference)
	const std::vector<int>&	getData() const;

	// Setters (setters should receive parameters by value or const-reference)

	// Member functions
	void	addNumber(int n);
	template <typename InputIterator>
	void	addNumber(InputIterator begin, InputIterator end);
	int		shortestSpan();
	int		longestSpan();

	// Exceptions
	class	FullSpanException;
	class	TooSmallSpanException;

};

std::ostream&	operator<<(std::ostream& o, const Span& obj);


// Exception nested classes
class Span::FullSpanException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

class Span::TooSmallSpanException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

#endif
