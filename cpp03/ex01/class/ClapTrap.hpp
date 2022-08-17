/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:16:41 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/17 15:18:18 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:

	std::string	_name;
	int			_hp;
	int			_mana;
	int			_dmg;

public:

	// Constructors
	ClapTrap();
	ClapTrap(ClapTrap const & src);
	ClapTrap(std::string name);

	// Destructors
	~ClapTrap();

	// Operator overload
	ClapTrap &	operator=(ClapTrap const & rhs);

	// Accessors
	std::string	getName() const;
	int			getHp() const;
	int			getMana() const;
	int			getDmg() const;

	// Member functions
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

std::ostream &	operator<<(std::ostream & o, ClapTrap const &obj);

#endif
