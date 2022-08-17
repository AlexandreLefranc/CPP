/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:16:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/17 15:41:02 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main()
{
	std::cout	<< std::endl << " ====================== "
				<< "Testing constructors"
				<< " ====================== "<< std::endl;
	ClapTrap	bot1;
	ClapTrap	bot2("Roro");
	ClapTrap	bot3;
	bot3 = ClapTrap("Rara");
	ClapTrap	bot4(bot2);

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing << operator overload"
					<< " ====================== "<< std::endl;
		std::cout << bot1 << std::endl;
		std::cout << bot2 << std::endl;
		std::cout << bot3 << std::endl;
		std::cout << bot4 << std::endl;
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing accessors"
					<< " ====================== "<< std::endl;
		std::cout 	<< "bot2.getName(): " << bot2.getName() << std::endl;
		std::cout 	<< "bot2.getHp(): " << bot2.getHp() << std::endl;
		std::cout 	<< "bot2.getMana(): " << bot2.getMana() << std::endl;
		std::cout 	<< "bot2.getDmg(): " << bot2.getDmg() << std::endl;
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing member functions: attack()"
					<< " ====================== "<< std::endl;
		for (int i = 0; i < 12; i++)
		{
			std::cout << bot2 << std::endl << std::endl;
			bot2.attack("Vicos");
			std::cout << std::endl;
		}
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing member functions: takeDamage()"
					<< " ====================== "<< std::endl;
		for (int i = 0; i < 5; i++)
		{
			std::cout << bot2 << std::endl << std::endl;
			bot2.takeDamage(3);
			std::cout << std::endl;
		}
	}

	{
		std::cout	<< std::endl << " ====================== "
					<< "Testing member functions: beRepaired()"
					<< " ====================== "<< std::endl;
		for (int i = 0; i < 5; i++)
		{
			std::cout << bot3 << std::endl;
			bot3.beRepaired(2);
			std::cout << std::endl;
		}
	}

	std::cout << std::endl;
}
