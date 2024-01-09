/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mademir <mademir@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/05 07:24:51 by mademir       #+#    #+#                 */
/*   Updated: 2024/01/05 10:01:06 by mademir       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "id:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "id:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::checkAmount(void) const {return (this->_amount);}
int	Account::getNbAccounts(void) {return (Account::_nbAccounts);}
int	Account::getTotalAmount(void) {return (Account::_totalAmount);}
int	Account::getNbDeposits(void) {return (Account::_totalNbDeposits);}
int	Account::getNbWithdrawals(void) {return (Account::_totalNbWithdrawals);}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << "id:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	refused = true;

	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		refused = false;
	}
	Account::_displayTimestamp();
	std::cout << "id:" << this->_accountIndex << ";";
	if (refused)
	{
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "p_amount:" << this->_amount + withdrawal << ";";
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::_displayTimestamp(void)
{
	std::time_t	time_in_sec = std::time(NULL);
	std::tm		*timemark = std::localtime(&time_in_sec);

	std::cout << "[" << timemark->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << timemark->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << timemark->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << timemark->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << timemark->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << timemark->tm_sec << "] ";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "id:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
