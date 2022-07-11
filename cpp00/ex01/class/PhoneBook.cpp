#include <iostream>
#include "PhoneBook.hpp"

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

void	PhoneBook::incrementCount(void)
{
	this->_count = this->getCount() + 1;
}
