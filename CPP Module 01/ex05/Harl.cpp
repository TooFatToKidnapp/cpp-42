/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:12:53 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/04 13:37:11 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::complain(std::string level)
{
	void	(Harl::*funcs[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int i;
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			break;
		}
	}
	if (i == 4)
		std::cout << "Error type: [ NONE ]" << std::endl;
}

void	Harl::debug()
{
	std::cout << "Error type: [ DEBUG ]"<< std::endl;
}

void	Harl::info()
{
	std::cout << "Error type: [ INFO ]" << std::endl;
}

void	Harl::warning()
{
	std::cout << "Error type: [ WARNING ]" << std::endl;
}

void	Harl::error()
{
	std::cout << "Error type: [ ERROR ]" << std::endl;
}

