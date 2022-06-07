/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:07:11 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/07 14:05:09 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_CPP
# define CONTACT_CLASS_CPP

#include <iostream>

using std::string;

class	Contact
{
	public:
		Contact();
		~Contact();

	void	createContact(int id);
	void	addContact(int id, string fn, string ln, string nn, string pn, string sec);
	void	displayContactInfo(int type);
	bool	isEmpty(void);

	private:
		int		id;
		string	firstName;
		string	lastName;
		string	nickName;
		string	phoneNumber;
		string	secret;

};

#endif
