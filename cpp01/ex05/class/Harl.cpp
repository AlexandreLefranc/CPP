/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:34:34 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/08 21:25:07 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::_debug()
{
	std::cout << "DEBUG STUFF" << std::endl;
}

void	Harl::_info()
{
	std::cout << "INFO STUFF" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "WARNING STUFF" << std::endl;
}

void	Harl::_error()
{
	std::cout << "ERROR STUFF" << std::endl;
}


void	Harl::complain(std::string level)
{
	void (Harl::*fptr[])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error} ;



	(void)level;
}
