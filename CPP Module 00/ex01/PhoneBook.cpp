/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:04:24 by aabdou            #+#    #+#             */
/*   Updated: 2022/06/26 19:55:45 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook() {i = 0;};

void	PhoneBook::SearchContent(int nb)
{
	ContactInfo& contact = Info[nb];
	std::cout << "first name      : " << contact.first_name << std::endl;
	std::cout << "last name       : " << contact.last_name << std::endl;
	std::cout << "nick name       : " << contact.nick_name << std::endl;
	std::cout << "phone number    : " << contact.phone_nb << std::endl;
	std::cout << "darkest secrets : " << contact.darkest_secret << std::endl;
}

std::string	LengthCheck(std::string str)
{
	if (str.length() >= 10)
	{
			str = str.substr(0, 9);
			str += ".";
	}
	return (str);
}

void	PhoneBook::PrintContent(int i)
{
	ContactInfo& contact = Info[i];

	std::cout << "|";
	std::cout << std::setw(10) << i + 1 << "|";
	std::cout << std::setw(10) << LengthCheck(contact.first_name) << "|";
	std::cout << std::setw(10) << LengthCheck(contact.last_name) << "|";
	std::cout << std::setw(10) << LengthCheck(contact.nick_name) << "|" << std::endl;

}

void	PhoneBook::Search()
{
	int	nb;
	int j(0);

	std::cout << "|";
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	while (j < i)
	{
		PrintContent(j);
		j++;
	}
	std::cout << "Print the index of the name : ";
	std::cin >> nb;
	nb--;
	if (i == 0)
		std::cout << "PhoneBook is empty ..." << std::endl;
	else if (nb <= i && nb >= 0)
		SearchContent(nb);

}

void	PhoneBook::AddContact(int i)
{
	ContactInfo& contact = Info[i];

	std::cout << "first name : ";
	std::cin >> contact.first_name;
	std::cout << "last name : ";
	std::cin >> contact.last_name;
	std::cout << "nickname : ";
	std::cin >> contact.nick_name;
	std::cout << "phone number : ";
	std::cin >> contact.phone_nb;
	std::cout << "darkest secre : ";
	std::cin >> contact.darkest_secret;
}

void	PhoneBook::Add()
{
	int j(1);

	if (i == 8)
	{
		while (j < i)
		{
			Info[j - 1] = Info[j];
			j++;
		}
		i--;
	}
	AddContact(i++);
}
