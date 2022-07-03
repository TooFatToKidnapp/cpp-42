/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:00:43 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/03 21:07:24 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::complain(std::string level)
{
	void	(Harl::*funcs[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int i;
	i = ("DEBUG" == level) * 1
		+ ("INFO" == level) * 2
		+ ("WARNING" == level) * 3
		+ ("ERROR" == level) * 4;
	switch (i)
	{
	case 0:
		std::cout << "Error type: [ NONE ]" << std::endl;
		break;
	case 1:
		(this->*funcs[0])();
		i++;
	case 2:
		(this->*funcs[1])();
		i++;
	case 3:
		(this->*funcs[2])();
		i++;
	case 4:
		(this->*funcs[3])();
		i++;
	}

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

