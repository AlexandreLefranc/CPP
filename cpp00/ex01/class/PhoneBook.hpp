#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

private:
	int		_count;
	Contact	_contact_list[8];
	int		_ask_index();

public:
	PhoneBook();
	~PhoneBook();

	int		get_count() const;
	void	set_count(int value);
	void	add_contact();
	void	search();
};

#endif
