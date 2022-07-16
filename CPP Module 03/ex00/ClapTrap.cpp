/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:51:13 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/16 20:25:05 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Attack(0), Hit_Point(10), Energy(10)
{
	std::cout << "Default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), Attack(0), Hit_Point(10), Energy(10)
{
	std::cout << "Default constructor called | Name = ["  << name << "]" << std::endl;
}

ClapTrap::~ClapTrap(){ std::cout << this->name <<" died lol" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	name = name + "_clone";
	std::cout << "Copy constructor called | NAME = [" << name << "]" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->name = other.name;
	this->Hit_Point = other.Hit_Point;
	this->Attack = other.Attack;
	this->Energy = other.Energy;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{

}

/*
void ClapTrap::attack(const std::string& target)
{
	if (this->Energy == 0)
	{
		std::cout << this->name << " cant attack, no energy left" << std::endl;
		return;
	}
	this->Energy--;

	std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->Attack << " points if damage!" << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy == 0)
	{
		std::cout << this->name << " cant attack, no energy left" << std::endl;
		return;
	}
	this->Energy--;

	std::cout << this->name << " repaired himself for " << amount << " Hit Point" << std::endl;
	this->Hit_Point += amount;

	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{

	this->Hit_Point -= amount;
	std::cout << this->name << " took " << amount << " damage" << std::endl;

	return;
}
*/
