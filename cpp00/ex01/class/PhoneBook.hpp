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

	void	setCount(int value);
	int		getCount(void) const;
	void	incrementCount(void);
};

#endif
