/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:39:48 by alefranc          #+#    #+#             */
/*   Updated: 2022/09/28 16:34:35 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convertor.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of argument. Expect one argument." << std::endl;
		return (1);
	}

	try
	{
		Convertor	convertor = Convertor(argv[1]);
		std::cout << convertor;
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl; 
	}

	return (0);
}