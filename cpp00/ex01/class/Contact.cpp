#include <iostream>
#include "Contact.hpp"

Contact::Contact(void): _phone(0)
{
	std::cout << "Contact created" << std::endl;
	// std::cout << "_phone=" << this->_phone << std::endl;
	(void)this->_phone;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}
