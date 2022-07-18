/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:28:10 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/18 14:13:06 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include"Contact.hpp"

int main(void)
{
	PhoneBook Data;
	std::string user_input;

	std::cout << "📞 ALLOOO ..." << std::endl;
	std::cout << "Save Contact   : ADD" << std::endl;
	std::cout << "Search Contact : SEARCH" << std::endl;
	std::cout << "End Call       : EXIT" << std::endl;

	while (true)
	{
		std::cout << "ENTER COMMAND  : ";
		std::cin >> user_input;
		if (user_input == "ADD")
			Data.Add();
		else if (user_input == "SEARCH")
			Data.Search();
		else if (user_input == "EXIT" || std::cin.eof() == 1)
			return (0);
		else
			std::cout << "=== wrong input :/ ===" << std::endl;
		if (std::cin.eof())
			return (0);
	}
	return (0);
}
