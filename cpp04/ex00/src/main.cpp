/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:56:38 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/18 19:21:26 by alefranc         ###   ########.fr       */
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
	const Animal * meta = new Animal();
	const Animal * cat = new Cat();
	const Animal * dog = new Dog();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << meta->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete cat;
	delete dog;

	std::cout << std::endl;

	const WrongAnimal * wmeta = new WrongAnimal();
	const WrongAnimal * wcat = new WrongCat();

	std::cout << wcat->getType() << std::endl;
	std::cout << wmeta->getType() << std::endl;

	wcat->makeSound();
	wmeta->makeSound();

	delete wmeta;
	delete wcat;

	return (0);
}
