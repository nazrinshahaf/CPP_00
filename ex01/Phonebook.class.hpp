/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:22:27 by nfernand          #+#    #+#             */
/*   Updated: 2022/02/28 19:26:47 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

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
		void	searchContact(void);
};

#endif
