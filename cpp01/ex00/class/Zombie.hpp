/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:43:52 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/05 18:45:14 by alefranc         ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();

	void	announce(void);

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
