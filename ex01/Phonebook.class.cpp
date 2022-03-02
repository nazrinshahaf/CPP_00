/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:24:11 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/01 11:50:11 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Phonebook::Phonebook(void)
{
	this->contactCount = 0;
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::addContact()
{
	if (this->contactCount == 7)
		cout << "Phonebook Capacity is full [8/8]" << endl;
	else
	{
		this->contactList[this->contactCount].createContact(this->contactCount);
		this->contactCount++;
	}
	return ;
}

void	printHeader(int i)
{
	if (i == 0)
		cout << "|==========|==========|==========|==========|" << endl;
	if (i == 1)
	{
		cout << "|==========|==========|==========|==========|" << endl;
		cout << "|     Index|First Name| Last Name| Nick Name|" << endl;
	}
}

void	Phonebook::searchContact(void)
{
	int	input;

	if (this->contactCount == 0)
		cout << "Please Add Contacts" << endl;
	else
	{
		cout << "Please enter index number or 42 to quit: ";
		while (1)
		{
			cin >> input;
			if (input == 42)
				return ;
			else if (input > 8 || input < 0 || input >= this->contactCount)
				cout << "Please enter a valid index Number or 42 to quit." << endl;
			else
				break;
		}
		printHeader(1);
		this->contactList[input].displayContactInfo();
		printHeader(0);
	}
	return ;
}
