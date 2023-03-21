#ifndef RPN_HPP
# define RPN_HPP

# include <string>
# include <iostream>
# include <stack>

class RPN
{
private:
	RPN();
	RPN(const RPN& src);
	RPN& operator=(const RPN& rhs);

	std::string	_raw;

public:
	RPN(const std::string& raw);
	~RPN();

	int	calculate() const;

};

#endif