/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:56:38 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/15 18:35:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main()
{
	{
		std::cout << "=====Testing sounds====" << std::endl;

		// const Animal* meta = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();

		// std::cout << "Animal type: " << meta->getType() << std::endl;
		std::cout << "Cat type: " << cat->getType() << std::endl;
		std::cout << "Dog type: " << dog->getType() << std::endl;

		// std::cout << "Animal sound: ";
		// meta->makeSound();

		std::cout << "Cat sound: ";
		cat->makeSound();

		std::cout << "Dog sound: ";
		dog->makeSound();

		// delete meta;
		delete cat;
		delete dog;
	}

	std::cout << std::endl;

	{
		std::cout << "=====Testing array of animal====" << std::endl;
		Animal **group = new Animal* [4];

		group[0] = new Cat();
		std::cout << std::endl;
		group[1] = new Cat();
		std::cout << std::endl;
		group[2] = new Dog();
		std::cout << std::endl;
		group[3] = new Dog();
		std::cout << std::endl;

		for (int i = 0; i < 4; i++)
		{
			std::cout << group[i]->getType() << std::endl;
			group[i]->makeSound();
			std::cout << std::endl;
		}

		for (int i = 0; i < 4; i++)
			delete group[i];
		delete [] group;
	}

	std::cout << std::endl;

	{
		std::cout << "=====Testing Brain in Cat====" << std::endl;

		Cat*	cat = new Cat();

		std::cout << cat->getBrain().getNbIdeas() << std::endl;
		cat->addIdea("Give me food!!");
		cat->addIdea("Give me cuddles!!");
		cat->addIdea("Stop now it is enough!!");
		cat->printIdeas();
		std::cout << cat->getBrain().getNbIdeas() << std::endl;
		delete cat;
	}

	std::cout << std::endl;

	{
		std::cout << "=====Testing Brain in Dog====" << std::endl;

		Dog*	dog = new Dog();

		std::cout << dog->getBrain().getNbIdeas() << std::endl;
		dog->addIdea("Want to pee!!");
		dog->addIdea("Want to poo!!");
		dog->addIdea("Want to eat!!");
		dog->addIdea("Want love!!");
		dog->printIdeas();
		std::cout << dog->getBrain().getNbIdeas() << std::endl;
		delete dog;
	}

	std::cout << std::endl;

	{
		std::cout << "=====Testing deep copy====" << std::endl;
		Cat*	cat1 = new Cat();
		cat1->addIdea("This belong to cat1, cat2 and cat3");
		std::cout << std::endl;

		Cat*	cat2 = new Cat(*cat1);
		std::cout << std::endl;

		Cat*	cat3 = new Cat();
		std::cout << std::endl;
		*cat3 = *cat1;
		std::cout << std::endl;

		cat1->addIdea("This belong to cat1");
		cat3->addIdea("This belong to cat3");
		std::cout << "[cat1]" << std::endl;
		cat1->printIdeas();
		std::cout << "[cat2]" << std::endl;
		cat2->printIdeas();
		std::cout << "[cat3]" << std::endl;
		cat3->printIdeas();
		std::cout << std::endl;

		delete cat1;
		std::cout << std::endl;
		delete cat2;
		std::cout << std::endl;
		delete cat3;
	}

	return (0);
}
