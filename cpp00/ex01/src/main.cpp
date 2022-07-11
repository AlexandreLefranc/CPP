#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

// static	void add_contact

int	main()
{
	PhoneBook	repertoire;
	std::string	answer;

	while (1)
	{
		std::cout << "What to do ? (ADD, SEARCH, EXIT) ";
		std::cin >> answer;
		if (answer == "ADD")
		{
			std::cout << "Do ADD, " << repertoire.getCount() << std::endl;

			repertoire.incrementCount();
			// add_contact(&repertoire)
		}
		if (answer == "SEARCH")
			std::cout << "Do SEARCH" << std::endl;
		if (answer == "EXIT")
			break;
	}

	return (0);
}
