/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:08:02 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/17 14:25:53 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(30, 100, 100)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 30, 100, 100)
{
	std::cout << "FragTrap Default Constructor called | Name = [" << name << "]" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->name << " is dead" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);

	return *this;
}

void	FragTrap::attack(std::string const &target)
{
		std::cout << "FragTrap [" << name << "] attacks [" << target
	<< "], causing [" << Attack << "] points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW;
	std::cout << "FragTrap give me a high five" << std::endl;
	std::cout << CLEAR;
}
