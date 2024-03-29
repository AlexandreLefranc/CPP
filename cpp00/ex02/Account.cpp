/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:19:50 by alefranc          #+#    #+#             */
/*   Updated: 2022/08/05 16:26:20 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::_nbAccounts << ";"
				<< "total:" << Account::_totalAmount << ";"
				<< "deposits:" << Account::_totalNbDeposits << ";"
				<< "withdrawals:" << Account::_totalNbWithdrawals
				<< std::endl;
}

Account::Account(int initial_deposit):
	_accountIndex(Account::_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount - deposit << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout	<< "withdrawal:" << withdrawal << ";"
					<< "amount:" << this->_amount << ";"
					<< "nb_withdrawals:" << this->_nbWithdrawals
					<< std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now = time(0);
	tm		*ltm = localtime(&now);

	std::cout	<< "["
				<< 1900 + ltm->tm_year
				<< std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon
				<< std::setfill('0') << std::setw(2) << ltm->tm_mday
				<< "_"
				<< std::setfill('0') << std::setw(2) << ltm->tm_hour
				<< std::setfill('0') << std::setw(2) << ltm->tm_min
				<< std::setfill('0') << std::setw(2) << ltm->tm_sec
				<< "] ";
}


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
