/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:56:53 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/14 10:52:20 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_nbAccounts++;
	this->_accountIndex = this->_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";created" << endl;
	return ;
}

Account::~Account()
{
	_displayTimestamp();
	this->_nbAccounts--;
	cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << endl;
	return ;
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
		<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
		<< ";deposit:" << deposit << ";amount:" << this->_amount + deposit
		<< ";nb_deposits:" << this->_nbDeposits << endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
			<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal 
			<< ";nb_withdrawals:" << this->_nbWithdrawals << endl;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		return (1);
	}
	else
	{
		cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
			<< ";withdrawal:refused" << endl;
		return (0);
	}
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	//cout << "[19920104_091532] ";
	std::time_t t = std::time(0);   
    std::tm* now = std::localtime(&t);
	cout << '[' << (now->tm_year + 1900);
	if (now->tm_mon < 10)
		cout << '0' << now->tm_mon;
	else
		cout << now->tm_mon;
	if (now->tm_mday < 10)
		cout << '0' << now->tm_mday << '_';
	else
		cout << now->tm_mday << '_';
	cout << now->tm_hour << now->tm_min << now->tm_sec;
	cout << "] " ;
	return ;
}

