/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:04:54 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/02 13:42:50 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

using std::cout;
using std::endl;

int	main()
{
	Account a1(42);
	Account a2(54);
	Account a3(957);
	Account a4(432);

	cout << "Number of accounts : " << Account::getNbAccounts() << endl;
	cout << "Total in all accounts : " << Account::getTotalAmount() << endl;
	cout << "Total number of deposits : " << Account::getNbDeposits() << endl;
	cout << "Total number of withdrawals : " << Account::getNbWithdrawals() << endl;

	Account::displayAccountsInfos();

	a1.displayStatus();
	a2.displayStatus();
	a3.displayStatus();
	a4.displayStatus();

	a1.makeDeposit(5);
	a2.makeDeposit(765);
	a3.makeDeposit(564);
	a4.makeDeposit(2);

	Account::displayAccountsInfos();

	a1.makeWithdrawal(312);
	a2.makeWithdrawal(34);
	a3.makeWithdrawal(657);
	a4.makeWithdrawal(4);

	Account::displayAccountsInfos();

	a1.displayStatus();
	a2.displayStatus();
	a3.displayStatus();
	a4.displayStatus();
}
