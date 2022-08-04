#include "myphonebook.hpp"

void	ignoreLine()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int		min(int a, int b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

std::string truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}
