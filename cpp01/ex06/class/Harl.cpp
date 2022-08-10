/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:34:34 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/10 21:26:35 by alefranc         ###   ########.fr       */
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

// https://stackoverflow.com/questions/4014827/how-can-i-compare-strings-in-c-using-a-switch-statement
// Try answer with



// static int	keytostring(std::string str, t_symstruct &lookuptable)
// {
// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (str == lookuptable[i].key)
// 		{
// 			return (lookuptable[i].val);
// 		}
// 	}
// 	return (-1);
// }

void	Harl::complain(std::string level)
{
	t_symstruct lookuptable[] =
	{
		{ "DEBUG", DEBUG },
		{ "INFO", INFO },
		{ "WARNING", WARNING },
		{ "ERROR", ERROR }
	};

	switch (1)
	{
		case DEBUG:
			this->_debug();
		case INFO:
			this->_info();
		case WARNING:
			this->_warning();
		case ERROR:
			this->_error();
		default:
			std::cout << "Error! Invalid level of log" << std::endl;
			break;
	}

	(void)level;
}
