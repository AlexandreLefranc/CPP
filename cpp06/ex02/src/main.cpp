/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:20:49 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/03 16:11:14 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate()
{
	unsigned int	r = rand() % 3;
	switch (r)
	{
		case 0:
			std::cout << "Generate A" << std::endl;
			return (new A());
		case 1:
			std::cout << "Generate B" << std::endl;
			return (new B());
		case 2:
			std::cout << "Generate C" << std::endl;
			return (new C());
		default:
			return (NULL);
	}

}

void	identify(Base* p)
{
	A*	is_a = dynamic_cast<A*>(p);
	B*	is_b = dynamic_cast<B*>(p);
	C*	is_c = dynamic_cast<C*>(p);

	std::cout << "A=" << is_a << " | B=" << is_b << " | C=" << is_c << std::endl;

	if (is_a != NULL)
		std::cout << "The type is A!" << std::endl;
	else if (is_b != NULL)
		std::cout << "The type is B!" << std::endl;
	else if (is_c != NULL)
		std::cout << "The type is C!" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p).~A();
		std::cout << "The type is A!" << std::endl;
		return;
	}
	catch (std::exception& e)
	{}

	try
	{
		dynamic_cast<B&>(p).~B();
		std::cout << "The type is B!" << std::endl;
		return;
	}
	catch (std::exception& e)
	{}

	try
	{
		dynamic_cast<C&>(p).~C();
		std::cout << "The type is C!" << std::endl;
		return;
	}
	catch (std::exception& e)
	{}
}

int main(int argc, char** argv)
{
	Base* p;

	if (argc > 1)
	{
		srand(atoi(argv[1]));
		p = generate();
		identify(p);
		identify(*p);
		delete p;
	}
	return (0);
}