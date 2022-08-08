/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:15:01 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 16:21:15 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Printing addresses" << std::endl;
	std::cout << "Address of the string variable: " << &str << std::endl;
	std::cout << "Address held by stringPTR     : " << stringPTR << std::endl;
	std::cout << "Address held by stringREF     : " << &stringREF << std::endl;

	std::cout << "Printing values" << std::endl;
	std::cout << "Value of the string variable : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
