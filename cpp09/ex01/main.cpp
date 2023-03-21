#include <iostream>
#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
		return 1;
	
	RPN myrpn(argv[1]);

	std::cout << myrpn.calculate() << std::endl;
}