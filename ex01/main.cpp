/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:28:39 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/01 11:51:24 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int	main(void)
{
	Phonebook	p1;
	string		input;

	cout << "=========================" << endl;
	cout << "Welcome to Your Phonebook" << endl;
	cout << "=========================" << endl << endl;
	while (1)
	{
		cout << "Input Phonebook Command." << endl << endl;
		cout << "Your input: ";
		cin >> input;
		cout << endl;
		
		if (input == "ADD")
		{
			cout << "==============================" << endl;
			cout <<  "Adding a Contact to Phonebook" << endl;
			cout << "==============================" << endl << endl;
			p1.addContact();
		}
		else if (input == "SEARCH")
		{
			cout << "=================================" << endl;
			cout <<  "Searching a Contact to Phonebook" << endl;
			cout << "=================================" << endl << endl;
			p1.searchContact();
		}
		else if (input == "EXIT")
		{
			//do something
			return (0);
		}
		else
		{
			cout << "Please enter a valid command." << endl << endl;
			cout << "Comamnds Available	:" << endl;
			cout << "ADD			: Adds contact to Phonebook." << endl;
			cout << "SEARCH			: Search contact in Phonebook." << endl;
			cout << "EXIT			: Exits Phonebook." << endl;
		}
		cout << endl;
	}
	return (0);
}
