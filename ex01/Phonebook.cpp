/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:24:11 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/07 14:36:18 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

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
	if (this->contactList[7].isEmpty() == true)
	{
		this->contactList[this->contactCount].createContact(this->contactCount);
		if (this->contactCount < 8)
			this->contactCount++;
	}
	else
	{
		cout << this->contactCount << endl;
		cout << (this->contactCount % 8) << endl;
		this->contactList[this->contactCount % 8].createContact((this->contactCount) % 8);
		this->contactCount++;
	}
	return ;
}

void	Phonebook::fillContact()
{
	this->contactList[0].addContact(0, "Lyuben1", "Ufuoma", "LN1", "123712387", "odaioda");
	this->contactList[1].addContact(1, "Lyuben2", "Ufuoma", "LN2", "123712387", "odaioda");
	this->contactList[2].addContact(2, "Lyuben3", "Ufuoma", "LN3", "123712387", "odaioda");
	this->contactList[3].addContact(3, "Lyuben4", "Ufuoma", "LN4", "123712387", "odaioda");
	this->contactList[4].addContact(4, "Lyuben5", "Ufuoma", "LN5", "123712387", "odaioda");
	this->contactList[5].addContact(5, "Lyuben6", "Ufuoma", "LN6", "123712387", "odaioda");
	this->contactList[6].addContact(6, "Lyuben7", "Ufuoma", "LN7", "123712387", "odaioda");
	this->contactList[7].addContact(7, "Lyuben8", "Ufuoma", "LN8", "123712387", "odaioda");
	this->contactCount = 8;
	cout << "CONTACT BOOK FILLED" << endl;
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
	if (i == 2)
	{
		cout << "|==========|==========|==========|==========|==========|==========|" << endl;
		cout << "|     Index|First Name| Last Name| Nick Name| Phone No |  Secret  |" << endl;
	}
	if (i == 3)
		cout << "|==========|==========|==========|==========|==========|==========|" << endl;
}

void	Phonebook::searchContact(void)
{
	int	input;

	if (contactList[0].isEmpty())
		cout << "Please Add Contacts" << endl;
	else
	{
		printHeader(1);
		printHeader(0);
		for (int i = 0; i < contactCount && i < 8; i++)
			this->contactList[i].displayContactInfo(0);
		printHeader(0);
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
		printHeader(2);
		printHeader(3);
		this->contactList[input].displayContactInfo(1);
		printHeader(3);
	}
	return ;
}
