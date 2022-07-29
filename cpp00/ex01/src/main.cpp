#include "myphonebook.hpp"

// static	void add_contact

int	main()
{
	PhoneBook	repertoire;
	std::string	answer;

	std::cout << "helllo" + " you" << std::endl;
	while (std::cin.eof() != 1)
	{
		std::cout << "What to do ? (ADD, SEARCH, EXIT) ";
		getline(std::cin, answer);
		if (answer == "ADD")
		{
			std::cout << "Do ADD, " << repertoire.getCount() << std::endl;

			repertoire.updateContact(repertoire.getCount());
			// repertoire.incrementCount();
			// add_contact(&repertoire)
		}
		else if (answer == "SEARCH")
			std::cout << "Do SEARCH" << std::endl;
		else if (answer == "EXIT")
			break;
	}

	return (0);
}
