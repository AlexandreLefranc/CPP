/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:20:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/16 17:20:47 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main()
{
	{
		Fixed		a;
		Fixed const	b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
	}

	{
		std::cout << std::endl << "Testing increment and decrements" << std::endl;
		Fixed	a;

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
	}

	{
		std::cout << std::endl << "Testing comparisons" << std::endl;
		Fixed	a(1);
		Fixed	b(2);
		Fixed	c(2);

		std::cout << std::boolalpha << a << " < " << b << " = " << (a < b) << std::endl;
		std::cout << std::boolalpha << b << " < " << c << " = " << (b < c) << std::endl;
		std::cout << std::boolalpha << b << " < " << a << " = " << (b < a) << std::endl;

		std::cout << std::boolalpha << a << " <= " << b << " = " << (a <= b) << std::endl;
		std::cout << std::boolalpha << b << " <= " << c << " = " << (b <= c) << std::endl;
		std::cout << std::boolalpha << b << " <= " << a << " = " << (b <= a) << std::endl;

		std::cout << std::boolalpha << a << " > " << b << " = " << (a > b) << std::endl;
		std::cout << std::boolalpha << b << " > " << c << " = " << (b > c) << std::endl;
		std::cout << std::boolalpha << b << " > " << a << " = " << (b > a) << std::endl;

		std::cout << std::boolalpha << a << " >= " << b << " = " << (a >= b) << std::endl;
		std::cout << std::boolalpha << b << " >= " << c << " = " << (b >= c) << std::endl;
		std::cout << std::boolalpha << b << " >= " << a << " = " << (b >= a) << std::endl;
	}

	{
		std::cout << std::endl << "Testing arithmetics" << std::endl;
		Fixed	a(3);
		Fixed	b(5);

		std::cout << a << " + " << b << " = " << (a + b) << std::endl;
		std::cout << a << " - " << b << " = " << (a - b) << std::endl;
		std::cout << a << " * " << b << " = " << (a * b) << std::endl;
		std::cout << a << " / " << b << " = " << (a / b) << std::endl;
	}

	{
		std::cout << std::endl << "Testing min and max" << std::endl;
		Fixed	a(3);
		Fixed	b(5);

		std::cout << "min(" << a << "," << b << ") = " << Fixed::min(a,b) << std::endl;
		std::cout << "max(" << a << "," << b << ") = " << Fixed::max(a,b) << std::endl;
	}

	return (0);
}
