/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:34:34 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 17:57:29 by alefranc         ###   ########.fr       */
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
	std::cout
		<< "I love having extra bacon for my "
		<< "7XL-double-chesse-triple-pickle-special-ketchup burger. "
		<< "I really do!"
		<< std::endl;
}

void	Harl::_info()
{
	std::cout
		<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn't put enough bacon in my burger! "
		<< "If you did, I wouldn't be asking for more!"
		<< std::endl;
}

void	Harl::_warning()
{
	std::cout
		<< "I think I deserve to have some extra bacon for free. "
		<< "I've been coming for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::_error()
{
	std::cout
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}


void	Harl::complain(std::string level)
{
	t_pair	fcts[4] = {
		{"DEBUG", &Harl::_debug},
		{"INFO", &Harl::_info},
		{"WARNING", &Harl::_warning},
		{"ERROR", &Harl::_error}
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == fcts[i].name)
		{
			(this->*(fcts[i].fptr))();
		}
	}
}
