/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:56:43 by alefranc          #+#    #+#             */
/*   Updated: 2022/10/13 15:45:17 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	{
		Span sp = Span(5);
		std::cout << sp << std::endl;

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try
		{
			sp.addNumber(12);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << sp << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span sp = Span(2);

		sp.addNumber(-10);
		std::cout << sp << std::endl;

		try
			{std::cout << sp.shortestSpan() << std::endl;}
		catch (std::exception& e)
			{std::cout << e.what() << std::endl;}

		try
			{std::cout << sp.longestSpan() << std::endl;}
		catch (std::exception& e)
			{std::cout << e.what() << std::endl;}

		std::cout << std::endl;
		sp.addNumber(10);

		std::cout << sp << std::endl;

		try
			{std::cout << sp.shortestSpan() << std::endl;}
		catch (std::exception& e)
			{std::cout << e.what() << std::endl;}

		try
			{std::cout << sp.longestSpan() << std::endl;}
		catch (std::exception& e)
			{std::cout << e.what() << std::endl;}
	}
	std::cout << std::endl;
	{
		int					intarray[] = {1,5,3};
		std::vector<int>	intvector(intarray, intarray + 3);
		Span				sp(10);

		sp.addNumber(5);
		std::cout << sp << std::endl;
		sp.addNumber(intvector.begin(), intvector.end());
		std::cout << sp << std::endl;
	}
	std::cout << std::endl;
	{
		Span	sp(1000000);
		for (int i = 0; i < 1000000; i++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	return (0);
}