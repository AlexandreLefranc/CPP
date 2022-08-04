#include "myphonebook.hpp"

PhoneBook::PhoneBook(void): _count(0)
{
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

static std::string ask_info(std::string info)
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
	c->set_first_name(ask_info("first name"));
	c->set_last_name(ask_info("last name"));
	c->set_nick_name(ask_info("nick name"));
	c->set_phone(ask_info("phone number"));
	c->set_secret(ask_info("darkest secret"));
	cout << "Contact created !" << endl;
	this->_count += 1;
}

void	PhoneBook::search()
{
	cout	<< std::setw(10) << truncate("index") << "|"
			<< std::setw(10) << truncate("first name") << "|"
			<< std::setw(10) << truncate("last name") << "|"
			<< std::setw(10) << truncate("nick name") << "|"
			<< std::endl;
	for (int i = 0; i < min(this->_count, 8); i++)
	{
		cout	<< std::setw(10) << i << "|"
				<< std::setw(10) << truncate(this->_contact_list[i].get_first_name()) << "|"
				<< std::setw(10) << truncate(this->_contact_list[i].get_last_name()) << "|"
				<< std::setw(10) << truncate(this->_contact_list[i].get_nick_name())
				<< endl;
	}
	ask_index(this);
}
