/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:44:47 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 16:58:59 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{

private:

	std::string _name;
	Weapon		&_weapon;

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	std::string	getName() const;
	void		setName(std::string name);

	void	attack() const;

};

#endif
