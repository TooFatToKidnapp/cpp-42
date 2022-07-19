/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:36:45 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/18 17:20:18 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << GREEN;
	std::cout << "Cat Constructor is Called" << std::endl;
	std::cout << CLEAR;
}

Cat::~Cat()
{
	std::cout << GREEN;
	std::cout << "Cat Destructors is Called = [" << this->type << "]" << std::endl;
	std::cout << CLEAR;
}

Cat::Cat(std::string &type) : Animal(type)
{
	std::cout << GREEN;
	std::cout << "Cat Constructor is Called | Type = [" << this->type << "] called" << std::endl;
	std::cout << CLEAR;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << GREEN;
	std::cout << "Cat copy Constructor with type = [" << type << "] called " << std::endl;
	std::cout << CLEAR;
}

Cat &Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << GREEN;
	std::cout << "The Cat is Miaaawing " << std::endl;
	std::cout << CLEAR;
	return;
}

void Cat::setType(std::string type)
{
	this->type = type;
	return;
}
