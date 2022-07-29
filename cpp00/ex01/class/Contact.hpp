#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	long int	_phone;
	std::string	_secret;

public:
	Contact(void);
	~Contact(void);
};

#endif
