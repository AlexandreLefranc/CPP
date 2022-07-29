#include "myphonebook.hpp"

Contact::Contact(void)
{
	std::string	answer;

	std::cout << "Contact created" << std::endl;

	// std::cout << "What is the first name ? ";
	// getline(std::cin, answer);
	// std::cout << "What is the last name ? ";
	// getline(std::cin, answer);
	// std::cout << "What is the nick name ? ";
	// getline(std::cin, answer);
	// std::cout << "What is the phone number ? ";
	// getline(std::cin, answer);
	// std::cout << "What is the darkest secret ? ";
	// getline(std::cin, answer);
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}
