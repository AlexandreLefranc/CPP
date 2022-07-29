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


void	PhoneBook::set_count(int value)
{
	this->_count = value;
}

int		PhoneBook::get_count(void) const
{
	return (this->_count);
}

static std::string ask_info(std::string info) {
	std::string	str = "";
	// while (/*Vide*/) {
	// 	/*getline*/
	// }
}

void	PhoneBook::add_contact()
{
	Contact *c;

	c = &this->_contact_list[this->_count % 8];
	std::cout << "First name = " << c->get_first_name() << std::endl;
	c->set_first_name("Bob");
	std::cout << "First name = " << c->get_first_name() << std::endl;
	this->_count += 1;
}
