#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span
{

private:

protected:

public:
	// Constructors
	Span();
	Span(const Span& src);

	// Destructors
	virtual ~Span();

	// Operator overload
	Span&	operator=(const Span& rhs);

	// Getters (getters should return by value or const-reference)

	// Setters (setters should receive parameters by value or const-reference)

	// Member functions

	// Exceptions
	class ExampleException;

};

std::ostream&	operator<<(std::ostream& o, const Span& obj);


// Exception nested classes
class Span::ExampleException: public std::exception
{
public:
	virtual const char*	what() const throw();
};

#endif
