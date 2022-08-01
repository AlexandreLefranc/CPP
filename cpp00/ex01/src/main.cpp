#include "myphonebook.hpp"

int	main()
{
	PhoneBook	repertoire;
	std::string	answer;

	while (std::cin.eof() != 1)
	{
		std::cout << "What to do ? (ADD, SEARCH, EXIT) ";
		getline(std::cin, answer);
		if (answer == "ADD")
		{
			std::cout << "Do ADD, " << repertoire.get_count() << std::endl;

			repertoire.add_contact();
		}
		else if (answer == "SEARCH")
			std::cout << "Do SEARCH" << std::endl;
		else if (answer == "EXIT")
			break;
	}

	return (0);
}
