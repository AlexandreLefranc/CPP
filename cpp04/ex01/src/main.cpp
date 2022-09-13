/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:56:38 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/13 15:28:59 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main()
{
	{
		const Animal * meta = new Animal();
		const Animal * cat = new Cat();
		const Animal * dog = new Dog();

		std::cout << "Cat type: " << cat->getType() << std::endl;
		std::cout << "Dog type: " << dog->getType() << std::endl;
		std::cout << "Animal type: " << meta->getType() << std::endl;

		std::cout << "Cat sound: ";
		cat->makeSound();

		std::cout << "Dog sound: ";
		dog->makeSound();

		std::cout << "Animal sound: ";
		meta->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
	std::cout << std::endl;
	return (0);
}
