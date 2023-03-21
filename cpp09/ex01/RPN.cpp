#include "RPN.hpp"

RPN::RPN(const std::string& raw)
	: _raw(raw)
{
	// parse and check format


	for (std::string::iterator it = _raw.begin(); it != _raw.end(); ++it)
	{
		if (*it == ' ')
			_raw.erase(it);
	}
}

RPN::~RPN()
{}


static int	doTheMaths(int a, int b, char op)
{
	switch (op)
	{
		case '+':
			return b + a;
			break;

		case '-':
			return b - a;
			break;

		case '*':
			return b * a;
			break;

		case '/':
			return b / a;
			break;
	}

	return 0;
}

int	RPN::calculate() const
{
	std::stack<int> mystack;

	for (std::string::const_iterator it = _raw.begin(); it != _raw.end(); ++it)
	{
		if (*it >= '0' && *it <= '9')
			mystack.push(*it - '0');
		else
		{
			int nb1 = mystack.top();
			mystack.pop();

			int nb2 = mystack.top();
			mystack.pop();

			int	res = doTheMaths(nb1, nb2, *it);
			mystack.push(res);
		}
	}

	return mystack.top();
}