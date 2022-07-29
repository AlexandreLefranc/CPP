// setfill example
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setfill, std::setw
#include <string>

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
        if (show_ellipsis)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
    return str;
}

int main () {

	std::cout	<< std::setw(10) << truncate("index", 10) << "|"
				<< std::setw(10) << truncate("first namec", 10) << "|"
				<< std::endl;
	// std::cout << std::setfill (' ') << std::setw (10);
	// std::cout << 77 << std::endl;
	return (0);
}
