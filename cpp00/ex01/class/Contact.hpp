/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:31:33 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 18:33:25 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_phone;
	std::string	_secret;

public:
	Contact(void);
	~Contact(void);

	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nick_name(void) const;
	std::string get_phone(void) const;
	std::string get_secret(void) const;

	void	set_first_name(std::string str);
	void	set_last_name(std::string str);
	void	set_nick_name(std::string str);
	void	set_phone(std::string str);
	void	set_secret(std::string str);

	void	display_contact() const;
};

#endif
