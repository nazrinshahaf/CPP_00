/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:18:16 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/07 15:19:22 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::endl;
using std::string;

int	main(int argc, char **argv)
{
	int 	i;
	string	str;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			cout << str;
			i++;
		}
		cout << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
}
