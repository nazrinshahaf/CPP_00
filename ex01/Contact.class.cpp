/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:10:43 by nfernand          #+#    #+#             */
/*   Updated: 2022/03/01 11:49:46 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

using std::cout;
using std::cin;
using std::endl;

Contact::Contact()
{
}

Contact::~Contact()
{
	cout << "Contact Deleted" << endl;
}

void	Contact::createContact(int id)
{
	std::string input;
	
	id = this->id;

	cout << "First Name: ";
	std::getline(std::cin >> std::ws, this->firstName);
	cout << "Last Name: ";
	std::getline(std::cin >> std::ws, this->lastName);
	cout << "Nick Name: ";
	std::getline(std::cin >> std::ws, this->nickName);
	cout << "Phone Number: ";
	std::getline(std::cin >> std::ws, this->phoneNumber);
	cout << "Secret: ";
	std::getline(std::cin >> std::ws, this->secret);
	return ;
}

void	printFormat(string s, int pos)
{
	if (pos == 0)
	{
		if (s.length() >= 10)
			cout << "|" << std::right << std::setw(9) << s.substr(0,9) << ".";
		else
			cout << "|" << std::right << std::setw(10) << s;
	}
	else if (pos == 1)
	{
		if (s.length() >= 10)
			cout << "|" << std::right << std::setw(8) << s.substr(0,9) << ".|" << endl;
		else
			cout << "|" << std::right << std::setw(10) << s << "|" << endl;
	}
}

void	Contact::displayContactInfo()
{
	cout << "|" << std::right << std::setw(10) << this->id;
	printFormat(this->firstName, 0);
	printFormat(this->lastName, 0);
	printFormat(this->nickName, 1);
	return ;
}
