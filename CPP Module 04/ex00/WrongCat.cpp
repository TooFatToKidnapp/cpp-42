/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:27:20 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/18 20:36:18 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << RED;
	std::cout << "WrongCat Constructor called" << std::endl;
	std::cout << CLEAR;
}

WrongCat::~WrongCat()
{
	std::cout << RED;
	std::cout << "WrongCat Destructor called ["  << this->type << "]" << std::endl;
	std::cout << CLEAR;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << RED;
	std::cout << "WrongCat Copy Constructor = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	WrongAnimal::operator=(other)
	return *this;
}

WrongCat::WrongCat(std::string &type) : WrongAnimal(type)
{
	std::cout << RED;
	std::cout <<  "WrongCat Constructor with type = [" << type << "] called" << std::endl;
	std::cout << RESET;
}

void WrongCat::makeSound() const
{
	std::cout << GREEN;
	std::cout << " Wrong cat mew mew" << std::endl;
	std::cout << RESET;
}

void WrongCat::setType(std::string type)
{
	this->type = type;
}
