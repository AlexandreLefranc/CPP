#include "myphonebook.hpp"

// Constructor
Contact::Contact(void):
		_first_name(""),
		_last_name(""),
		_nick_name(""),
		_phone(""),
		_secret("") {
	std::cout << "Contact created" << std::endl;
}

// Destructor
Contact::~Contact(void) {
	std::cout << "Contact destroyed" << std::endl;
}

// Getters
std::string Contact::get_first_name(void) const {
	return (this->_first_name);
}
std::string Contact::get_last_name(void) const {
	return (this->_last_name);
}
std::string Contact::get_nick_name(void) const {
	return (this->_nick_name);
}
std::string Contact::get_phone(void) const {
	return (this->_phone);
}
std::string Contact::get_secret(void) const {
	return (this->_secret);
}

// Setters
void	Contact::set_first_name(std::string str) {
	this->_first_name = str;
}
void	Contact::set_last_name(std::string str) {
	this->_last_name = str;
}
void	Contact::set_nick_name(std::string str) {
	this->_nick_name = str;
}
void	Contact::set_phone(std::string str) {
	this->_phone = str;
}
void	Contact::set_secret(std::string str) {
	this->_secret = str;
}
