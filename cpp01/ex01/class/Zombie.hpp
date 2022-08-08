/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:43:52 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 15:30:22 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{

private:
	std::string	_name;

public:

	Zombie(void);
	~Zombie();

	void	set_name(std::string name);
	void	announce(void);

};

Zombie	*zombieHorde(int N, std::string name);

#endif
