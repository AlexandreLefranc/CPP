/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:16:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 18:15:32 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main()
{
	FragTrap	bob("Bob");

	std::cout << bob << std::endl;
	bob.attack("Vicos");
	std::cout << bob << std::endl;
	bob.takeDamage(20);
	std::cout << bob << std::endl;
	bob.beRepaired(15);
	std::cout << bob << std::endl;
	bob.highFivesGuys();
	return (0);
}
