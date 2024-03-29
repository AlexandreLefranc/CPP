/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:31:49 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 18:33:17 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myphonebook.hpp"

Contact::Contact(void):
		_first_name(""),
		_last_name(""),
		_nick_name(""),
		_phone(""),
		_secret("") {
	return;
}

// Destructor
Contact::~Contact(void) {
	return;
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

void	Contact::display_contact() const
{
	cout << "First name:\t" << this->_first_name << endl;
	cout << "Last name:\t" << this->_last_name << endl;
	cout << "Nick name:\t" << this->_nick_name << endl;
	cout << "Phone:\t\t" << this->_phone << endl;
	cout << "Secret:\t\t" << this->_secret << endl;
	cout << endl;
}
