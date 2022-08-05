/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:19:50 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/05 15:24:48 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit):
	_accountIndex(Account::_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int	Account::_nbAccounts = 0;
// int	_totalAmount = 0;
// int	_totalNbDeposits = 0;
// int	_totalNbWithdrawals = 0;
