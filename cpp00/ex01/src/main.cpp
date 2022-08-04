#include "myphonebook.hpp"

int	main()
{
	PhoneBook	repertoire;
	std::string	answer;

	while (true)
	{
		cout << "What to do ? (ADD, SEARCH, EXIT) ";
		getline(cin, answer);
		if (!cin)
		{
			cin.clear();
			ignoreLine();
		}
		if (cin.eof()) return (1);
		if (answer == "ADD")
		{
			// cout << "Do ADD, " << repertoire.get_count() << endl;
			repertoire.add_contact();
		}
		else if (answer == "SEARCH")
			std::cout << "Do SEARCH" << std::endl;
		else if (answer == "EXIT")
			break;
	}

	return (0);
}
