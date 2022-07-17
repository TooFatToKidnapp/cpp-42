/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:51:13 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/17 12:59:58 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Attack(0), Hit_Point(10), Energy(10)
{
	std::cout << "ClapTrap Default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), Attack(0), Hit_Point(10), Energy(10)
{
	std::cout << "ClapTrap Default constructor called | Name = ["  << name << "]" << std::endl;
}

ClapTrap::~ClapTrap(){ std::cout  << "ClapTrap " << this->name <<" died " << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	name = name + "_clone";
	std::cout << "ClapTrap Copy constructor called | NAME = [" << name << "]" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	this->name = other.name;
	this->Hit_Point = other.Hit_Point;
	this->Attack = other.Attack;
	this->Energy = other.Energy;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << RED;
	std::cout << "ClapTrap [" << this->name << "] attacks [" << target
	<< "], causing [" << this->Attack << "] points of damage!" << std::endl;
	std::cout << CLEAR;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap [" << this->name << "] Currently, Hitpoints is [" << Hit_Point << "]" << std::endl;

	std::cout << GREEN;
	if (Hit_Point > 0)
	{
		Hit_Point -= amount;
		if (Hit_Point < 0)
			Hit_Point = 0;
		std::cout << "ClapTrap [" << this->name << "] take Damages [" << amount << "]" << std::endl;
		std::cout << "ClapTrap [" << this->name << "] Hitpoints is [" << Hit_Point << "]" << std::endl;
		if (Hit_Point == 0)
			std::cout << "ClapTrap [" << this->name << "] is destroyed" << std::endl;
	}
	else
		std::cout << "ClapTrap [" << this->name << "] destroyed already.. :(" << std::endl;

	std::cout << CLEAR;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << CYAN;
	if (!Hit_Point)
		std::cout << "ClapTrap [" << this->name << "] destroyed already.. :(" << std::endl;
	else
	{
		Hit_Point += amount;
		std::cout << "ClapTrap [" << this->name << "] is repaired [" << amount << "]" << std::endl;
		std::cout << "ClapTrap [" << this->name << "] Hitpoints is [" << Hit_Point << "]" << std::endl;
	}
	std::cout << CLEAR;
}

ClapTrap::ClapTrap(std::string &name, int Attack, int Hit_point, int Energy )
: name(name), Attack(Attack), Hit_Point(Hit_point), Energy(Energy)
{
	std::cout << "ClapTrap Default Constructor called | Name = [" << name << "]" << std::endl;
}

ClapTrap::ClapTrap(int Attack, int Hit_Point, int Energy)
: Attack(Attack), Hit_Point(Hit_Point), Energy(Energy)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}
