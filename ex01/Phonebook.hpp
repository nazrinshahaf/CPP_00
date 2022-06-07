/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:22:27 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/07 14:01:41 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.hpp"

using std::string;

class	Phonebook
{
	private:
		Contact	contactList[8];
		int	contactCount;

	public:
		Phonebook(void);
		~Phonebook(void);

		void	addContact(void);
		void	fillContact(void);
		void	searchContact(void);
};

#endif
