/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:28:10 by aabdou            #+#    #+#             */
/*   Updated: 2022/06/26 18:28:42 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
	PhoneBook Data;
	std::string user_input;

	while(true)
	{
		std::cout << "INTER COMMAND :";
		std::cin >> user_input;
		if (user_input == "ADD")
			Data.Add();
		else if (user_input == "SEARCH")
			Data.Search();
		else if (user_input == "EXIT" || std::cin.eof() == 1)
			return 0;
	}
}
