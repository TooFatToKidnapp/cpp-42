/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:03:07 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/20 17:38:50 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Constructor is Called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	type = type + "_clone";
	std::cout << "Animal Copy Constructor = [" << type << "] called" << std::endl;
}

Animal::Animal( const std::string &name) : type(name)
{
	std::cout << "Animal Constructor is Called Type = [" << name << "]" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructors is Called [" << this->type << "]" << std::endl;
}

Animal &Animal::operator=(const Animal & other)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "?? ?? What animal are you? [" << type << "]" << std::endl;
}

std::string Animal::getType() const
{
	std::cout << "Animal getType function = [" << type << "] called" << std::endl;
	return (this->type);
}
