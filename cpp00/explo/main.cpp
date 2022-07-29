// setfill example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setfill, std::setw
#include <string>

std::string truncate(std::string str)
{
    if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

int main () {

	std::cout	<< std::setw(10) << truncate("index") << "|"
				<< std::setw(10) << truncate("first name") << "|"
				<< std::setw(10) << truncate("last name") << "|"
				<< std::setw(10) << truncate("nick name") << "|"
				<< std::endl;
	return (0);
}
