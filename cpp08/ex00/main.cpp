/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:39:44 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/06 15:52:39 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include "easyfind.hpp"

int	main()
{
	int					myints[] = { 10, 20, 30, 40 };
	std::vector<int>	myvector(myints,myints+4);
	std::list<int>		mylist(myints, myints+4);

	{
		std::vector<int>::const_iterator it;
		std::cout << "Vector, find 30" << std::endl;
		it = find(myvector.begin(), myvector.end(), 30);
		if (it != myvector.end())
			std::cout << "Found: " << *it << std::endl;

		std::cout << "Vector, easyfind 30" << std::endl;
		it = easyfind(myvector, 30);
		if (it != myvector.end())
			std::cout << "Found: " << *it << std::endl;
	}
	std::cout << std::endl;
	{
		std::vector<int>::const_iterator it;
		std::cout << "Vector, find 50" << std::endl;
		it = find(myvector.begin(), myvector.end(), 50);
		if (it != myvector.end())
			std::cout << "Found: " << *it << std::endl;

		std::cout << "Vector, easyfind 50" << std::endl;
		it = easyfind(myvector, 50);
		if (it != myvector.end())
			std::cout << "Found: " << *it << std::endl;
	}
	std::cout << std::endl;
	{
		std::list<int>::const_iterator it;

		std::cout << "Vector, easyfind 20" << std::endl;
		it = easyfind(mylist, 20);
		if (it != mylist.end())
			std::cout << "Found: " << *it << std::endl;

		std::cout << "List, easyfind 50" << std::endl;
		it = easyfind(mylist, 50);
		if (it != mylist.end())
			std::cout << "Found: " << *it << std::endl;
	}

	return (0);
}