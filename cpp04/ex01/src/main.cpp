/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:56:38 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/19 14:28:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
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

	{
		const WrongAnimal * wmeta = new WrongAnimal();
		const WrongAnimal * wcat = new WrongCat();

		std::cout << "WrongCat type: " << wcat->getType() << std::endl;
		std::cout << "WrongAnimal type: " << wmeta->getType() << std::endl;


		std::cout << "WrongCat sound: ";
		wcat->makeSound();

		std::cout << "WrongAnimal sound: ";
		wmeta->makeSound();

		delete wmeta;
		delete wcat;
	}

	std::cout << std::endl;

	{
		const WrongAnimal * wmeta = new WrongAnimal();
		const WrongCat * wcat = new WrongCat();

		std::cout << "WrongCat type: " << wcat->getType() << std::endl;
		std::cout << "WrongAnimal type: " << wmeta->getType() << std::endl;

		std::cout << "WrongCat sound: ";
		wcat->makeSound();

		std::cout << "WrongAnimal sound: ";
		wmeta->makeSound();

		delete wmeta;
		delete wcat;
	}

	return (0);
}
