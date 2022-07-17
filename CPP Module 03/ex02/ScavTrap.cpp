/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:14:16 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/17 16:12:25 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(20, 100, 50)
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 20, 100, 50)
 {
	std::cout << "ScavTrap Default Constructor called | Name = [" << name << "]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " died" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	name = name+ "_clone";
	std::cout << "ScavTrap Default Constructor called | Name = [" << name << "]" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	return *this;
}

void	ScavTrap::attack(std::string const & target)
{
	if (Hit_Point == 0)
	{
		std::cout << "ScavTrap [" << name << "] can't attack, because it's already destroy" << std::endl;
	}
	std::cout << RED;
	std::cout << "ScavTrap [" << name << "] attacks [" << target
	<< "], causing [" << Attack << "] points of damage!" << std::endl;
	std::cout << CLEAR;
}

void ScavTrap::guardGate(void)
{
	std::cout << YELLOW;
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
	std::cout << CLEAR;
}
