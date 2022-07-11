#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

private:
	std::string	_firstn;
	std::string	_lastn;
	std::string	_nickn;
	long int	_phone;
	std::string	_secret;

public:
	Contact(void);
	~Contact(void);
};

#endif
