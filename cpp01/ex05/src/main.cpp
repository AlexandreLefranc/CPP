/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:48:45 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/11 17:07:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl	complainer;
	std::cout << "Complaining about DEBUG level" << std::endl;
	complainer.complain("DEBUG");

	std::cout << std::endl << "Complaining about INFO level" << std::endl;
	complainer.complain("INFO");

	std::cout << std::endl << "Complaining about WARNING level" << std::endl;
	complainer.complain("WARNING");

	std::cout << std::endl << "Complaining about ERROR level" << std::endl;
	complainer.complain("ERROR");

	return (0);
}
