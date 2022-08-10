/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:31:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 18:36:17 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

private:
	int		_count;
	Contact	_contact_list[8];
	int		_ask_index() const;

public:
	PhoneBook();
	~PhoneBook();

	int		get_count() const;
	void	set_count(int value);
	void	add_contact();
	void	search() const;
};

#endif
