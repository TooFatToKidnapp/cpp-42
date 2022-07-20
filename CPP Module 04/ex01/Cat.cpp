/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <aabdou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:36:45 by aabdou            #+#    #+#             */
/*   Updated: 2022/07/20 10:13:20 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << GREEN;
	std::cout << "Cat Constructor is Called" << std::endl;
	brain = new Brain();
	std::cout << CLEAR;
}

Cat::~Cat()
{
	std::cout << GREEN;
	std::cout << "Cat Destructors is Called = [" << this->type << "]" << std::endl;
	std::cout << CLEAR;
	delete brain;
}

// Cat::Cat(std::string &type) : Animal(type)
// {
// 	std::cout << GREEN;
// 	std::cout << "Cat Constructor is Called | Type = [" << this->type << "] called" << std::endl;
// 	std::cout << CLEAR;
// }

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << GREEN;
	std::cout << "Cat copy Constructor with type = [" << type << "] called " << std::endl;
	std::cout << CLEAR;
	brain = new Brain();
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << GREEN;
	std::cout << "Cat Assignation operator called" << std::endl;
	*brain = *(other.brain);
	std::cout << CLEAR;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << GREEN;
	std::cout << "The Cat is Miaaawing " << std::endl;
	std::cout << CLEAR;
	return;
}

Brain *Cat::getBrain()
{
	return brain;
}

std::string Cat::getBrainIdea(unsigned int index)
{
	return brain->getIdea(index);
}

int Cat::addBrainIdea(std::string idea)
{
	return brain->addIdea(idea);
}
