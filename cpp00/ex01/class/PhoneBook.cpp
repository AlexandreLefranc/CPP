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

// static std::string ask_info(std::string info) {
// 	std::string	str = "";
// 	// while (/*Vide*/) {
// 	// 	/*getline*/
// 	// }
// }

static std::string askInfo(std::string info)
{
	std::string	answer;

	while (true)
	{
		cout << "What is your " << info << " ? ";
		getline(cin, answer);
		if (!cin)
		{
			cin.clear();
			ignoreLine();
		}
		if (cin.eof()) std::exit(1);
		if (answer.empty() == false)
		{
			return (answer);
		}
	}
}

void	PhoneBook::add_contact()
{
	Contact *c;

	c = &this->_contact_list[this->_count % 8];
	c->set_first_name(askInfo("first name"));
	c->set_last_name(askInfo("last name"));
	c->set_nick_name(askInfo("nick name"));
	c->set_phone(askInfo("phone number"));
	c->set_secret(askInfo("darkest secret"));
	cout << "Contact created !" << endl;
	this->_count += 1;
}
