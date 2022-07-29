#include "myphonebook.hpp"

PhoneBook::PhoneBook(void): _count(0)
{
	std::cout << "Hey " << this->_count << std::endl;
	std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
}


void	PhoneBook::setCount(int value)
{
	this->_count = value;
}

int		PhoneBook::getCount(void) const
{
	return (this->_count);
}

void	PhoneBook::updateContact(int count)
{
	this->_count += 1;
	std::cout << this->_count << std::endl;

	this->_contact_list[count]
}
