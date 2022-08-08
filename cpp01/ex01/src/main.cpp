/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:00:58 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 16:12:59 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << "--------- Testint case N = 0" << std::endl;
	int N = 0;
	Zombie *horde = zombieHorde(N, "Zozo");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;

	std::cout << std::endl << "--------- Testint case N = 1" << std::endl;
	N = 1;
	horde = zombieHorde(N, "Zozo");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;

	std::cout << std::endl << "--------- Testint case N = 2" << std::endl;
	N = 2;
	horde = zombieHorde(N, "Zozo");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;

	std::cout << std::endl << "--------- Testint case N = 5" << std::endl;
	N = 5;
	horde = zombieHorde(N, "Zozo");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;

	return (0);
}
