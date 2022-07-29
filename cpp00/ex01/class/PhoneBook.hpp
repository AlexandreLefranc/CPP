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

	int		get_count(void) const;
	void	set_count(int value);
	void	add_contact(void);
};

#endif
