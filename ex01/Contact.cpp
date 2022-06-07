/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:10:43 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/07 14:36:26 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

using std::cout;
using std::cin;
using std::endl;

Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->secret = "";
}

void Contact::addContact(int id, string fn, string ln, string nn, string pn, string sec)
{
	this->id = id;
	this->firstName = fn;
	this->lastName = ln;
	this->nickName = nn;
	this->phoneNumber = pn;
	this->secret = sec;
}

Contact::~Contact()
{
	cout << "Contact Deleted" << endl;
}

void	Contact::createContact(int id)
{
	std::string input;
	
	this->id = id;

	input = "";
	while (1)
	{
		std::getline(std::cin, input);
		if (input != "")
			break ;
		cout << "First Name: ";
	}
	this->firstName = input;
	input = "";

	cout << "Last Name: ";
	while (1)
	{
		std::getline(std::cin, input);
		if (input != "")
			break ;
		cout << "Last Name: ";
	}
	this->lastName = input;
	input = "";

	cout << "Nick Name: ";
	while (1)
	{
		std::getline(std::cin, input);
		if (input != "")
			break ;
		cout << "Nick Name: ";
	}
	this->nickName = input;
	input = "";

	cout << "Phone Number: ";
	while (1)
	{
		std::getline(std::cin, input);
		if (input != "")
			break ;
		cout << "Phone Number: ";
	}
	this->phoneNumber = input;
	input = "";

	cout << "Secret: ";
	while (1)
	{
		std::getline(std::cin, input);
		if (input != "")
			break ;
		cout << "Secret: ";
	}
	this->secret = input;
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

void	Contact::displayContactInfo(int type)
{
	if (type == 0)
	{
		cout << "|" << std::right << std::setw(10) << this->id;
		printFormat(this->firstName, 0);
		printFormat(this->lastName, 0);
		printFormat(this->nickName, 1);
	}
	else if (type == 1)
	{
		cout << "|" << std::right << std::setw(10) << this->id;
		printFormat(this->firstName, 0);
		printFormat(this->lastName, 0);
		printFormat(this->nickName, 0);
		printFormat(this->phoneNumber, 0);
		printFormat(this->secret, 1);
	}
}

bool	Contact::isEmpty(void)
{
	if (this->firstName == "" && this->lastName == "" && this->nickName == ""
			&& this->phoneNumber == "" && this->secret == "")
		return (true);
	return (false);
}
