/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:01:15 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/11 16:44:52 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{

private:

	std::string _name;
	Weapon		*_weapon;

public:

	HumanB(std::string name);
	~HumanB();

	std::string	getName() const;
	void		setName(std::string name);

	void	attack() const;
	void	setWeapon(Weapon &weapon);

};

#endif
