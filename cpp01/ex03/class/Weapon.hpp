/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:38:21 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/12 14:40:50 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{

private:

	std::string	_type;

public:

	Weapon(std::string type);
	~Weapon();

	std::string	const & getType() const;
	void		setType(std::string type);

};

#endif
