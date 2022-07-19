/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:04:24 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/19 14:03:21 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() { i = 0; };
PhoneBook::~PhoneBook() { std::cout << "Bye :^)" << std::endl; }

void	PhoneBook::SearchContent(int nb)
{
	Contact& contact = Info[nb];
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
	Contact& contact = Info[i];

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
	Contact& contact = Info[i];

	std::cout << "first name : ";
	if (!(std::cin >> Info[i].first_name))
		return ;
	std::cout << "last name : ";
	if (!(std::cin >> contact.last_name))
		return;
	std::cout << "nickname : ";
	if (!(std::cin >> contact.nick_name))
		return;
	std::cout << "phone number : ";
	if (!(std::cin >> contact.phone_nb))
		return;
	std::cout << "darkest secret : ";
	if (!(std::cin >> contact.darkest_secret))
		return;
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
