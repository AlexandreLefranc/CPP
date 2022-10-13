/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:17:43 by alex              #+#    #+#             */
/*   Updated: 2022/10/13 09:28:22 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int	main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << mstack.size() << std::endl;

	std::cout << std::endl;

	MutantStack<int>::iterator it2 = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it2;
	--it2;
	while (it2 != ite)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<int> s(mstack);
	return (0);
}
