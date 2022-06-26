/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:50:26 by aabdou            #+#    #+#             */
/*   Updated: 2022/06/26 21:46:59 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ContactInfo
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_nb;
		std::string darkest_secret;

};

class PhoneBook
{
	private:
		ContactInfo Info[8];
		int		i;
		void	AddContact(int i);
		void	SearchContent(int nb);
		void	PrintContent(int i);
	public:
		PhoneBook();
		~PhoneBook();
		void	Add();
		void	Search();

};

# endif
