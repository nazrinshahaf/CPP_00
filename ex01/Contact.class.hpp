/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:07:11 by nfernand          #+#    #+#             */
/*   Updated: 2022/02/28 19:24:33 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_CPP
# define CONTACT_CLASS_CPP

#include <iostream>

using std::string;

class	Contact
{
	private:
		int		id;
		string	firstName;
		string	lastName;
		string	nickName;
		string	phoneNumber;
		string	secret;

	public:
		Contact();
		~Contact();

	void	createContact(int id);
	void	displayContactInfo();
};

#endif
