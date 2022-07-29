#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

private:
	int		_count;
	Contact	_contact_list[8];

public:
	PhoneBook(void);
	~PhoneBook(void);

	int		getCount(void) const;
	void	setCount(int value);
	void	updateContact(void);
};

#endif
