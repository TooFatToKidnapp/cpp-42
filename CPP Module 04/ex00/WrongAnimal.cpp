/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:01:43 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/18 20:44:24 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("-")
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Constructor called" << std::endl;
	std::cout << CLEAR;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Constructor with type [" << type << "]" <<" called" << std::endl;
	std::cout << CLEAR;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Destructor called" << std::endl;
	std::cout << CLEAR;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal & other)
{
	std::cout << CYAN;
	std::cout << "WrongAnimal Assignment operator is called " << std::endl;
	this->type = other.type;
	std::cout << CLEAR;
}

void WrongAnimal::makeSound() const
{
	std::cout << CYAN;
	std::cout << "?? ?? WrongAnimal cannot make sound [" << type << "]" << std::endl;
	std::cout << CLEAR;
}

std::string WrongAnimal::getType()const
{
	std::cout << CYAN;
	std::cout << "WrongAnimal getType function = [" << type << "] called" << std::endl;
	std::cout << CLEAR;
	return this->type;
}
