/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:16:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 16:06:28 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing constructors"
					<< " ====================== "<< std::endl;

		{
			std::cout << "--------Default-------" << std::endl;
			ScavTrap	bob;
			std::cout<<bob<<std::endl;
		}
		{
			std::cout << "--------Param-------" << std::endl;
			ScavTrap	bob("Bob");
			std::cout<<bob<<std::endl;
		}
		{
			std::cout << "--------Copy-------" << std::endl;
			ScavTrap	model("TopModel");
			ScavTrap	bob(model);
			std::cout<<bob<<std::endl;
		}
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing attack()"
					<< " ====================== "<< std::endl;

		ScavTrap	bob("Bob");
		std::cout << bob << std::endl;
		bob.attack("Vicos");
		std::cout << bob << std::endl;
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing takeDamage()"
					<< " ====================== "<< std::endl;

		ScavTrap	bob("Bob");
		std::cout << bob << std::endl;
		bob.takeDamage(10);
		std::cout << bob << std::endl;
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing beRepaired()"
					<< " ====================== "<< std::endl;

		ScavTrap	bob("Bob");
		std::cout << bob << std::endl;
		bob.beRepaired(10);
		std::cout << bob << std::endl;
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing guardGate()"
					<< " ====================== "<< std::endl;

		ScavTrap	bob("Bob");
		bob.guardGate();
	}
}
