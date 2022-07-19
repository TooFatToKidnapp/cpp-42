/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:18:22 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/19 12:21:46 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << YELLOW;
	std::cout << "Dog Constructor is Called" << std::endl;
	std::cout << CLEAR;
}

Dog::Dog(std::string &type) : Animal(type)
{
	std::cout << YELLOW;
	std::cout << "Dog Constructor is Called | Type = [" << this->type << "]" << std::endl;
	std::cout << CLEAR;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << YELLOW;
	std::cout << "Dog Copy Constructor = [" << type << "] is called" << std::endl;
}

Dog::~Dog()
{
	std::cout << YELLOW;
	std::cout << "Dog Destructors is Called [" << this->type << "]"<< std::endl;
	std::cout << CLEAR;
}

Dog & Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << YELLOW;
	std::cout << "The Dog is Barking" << std::endl;
	std::cout << CLEAR;
	return;
}

void Dog::setType(std::string type)
{
	this->type = type;
}

